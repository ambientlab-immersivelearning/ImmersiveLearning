using UnityEngine;
using System.Collections;
using System.Linq;
using UnityEngine.XR.WSA.WebCam;
using ZXing;
using UnityEngine.UI;

public class CameraFeed : MonoBehaviour
{
    public Text statusText;

    PhotoCapture photoCaptureObject = null;
    Texture2D targetTexture = null;
    GameObject quad = null;
    Renderer quadRenderer;

    // Use this for initialization
    void Start()
    {
        Resolution cameraResolution = PhotoCapture.SupportedResolutions.OrderByDescending((res) => res.width * res.height).First();
        targetTexture = new Texture2D(cameraResolution.width, cameraResolution.height);

        // Create a GameObject to which the texture can be applied
        quad = GameObject.CreatePrimitive(PrimitiveType.Quad);
        quadRenderer = quad.GetComponent<Renderer>() as Renderer;
        quadRenderer.material = new Material(Shader.Find("Unlit/Texture"));

        quad.transform.parent = this.transform;
        quad.transform.position = new Vector3(-0.6f, -0.3f, 3.0f);
        quad.transform.localScale = new Vector3(0.25f, 0.25f, 0.25f);

        // Create a PhotoCapture object
        PhotoCapture.CreateAsync(false, delegate (PhotoCapture captureObject)
        {
            photoCaptureObject = captureObject;
            CameraParameters cameraParameters = new CameraParameters();
            cameraParameters.hologramOpacity = 0.0f;
            cameraParameters.cameraResolutionWidth = cameraResolution.width;
            cameraParameters.cameraResolutionHeight = cameraResolution.height;
            cameraParameters.pixelFormat = CapturePixelFormat.BGRA32;

            // Activate the camera
            photoCaptureObject.StartPhotoModeAsync(cameraParameters, delegate (PhotoCapture.PhotoCaptureResult result)
            {
                // Take a picture
                photoCaptureObject.TakePhotoAsync(OnCapturedPhotoToMemory);
            });
        });
    }

    void OnCapturedPhotoToMemory(PhotoCapture.PhotoCaptureResult result, PhotoCaptureFrame photoCaptureFrame)
    {
        // Copy the raw image data into the target texture
        photoCaptureFrame.UploadImageDataToTexture(targetTexture);
        quadRenderer.material.SetTexture("_MainTex", targetTexture);

        // Decode Camera Texture
        IBarcodeReader barcodeReader = new BarcodeReader();
        Result qrCode = barcodeReader.Decode(targetTexture.GetPixels32(), targetTexture.width, targetTexture.height);

        // Check if QR code was seen
        if (qrCode != null)
        {
            string qrResult = qrCode.Text;
            Debug.Log("DECODED TEXT: " + qrResult);
            statusText.text = qrResult;

            // Load in objects from URL
            StartCoroutine(WWWHandler.GetAssetBundle(qrResult));

            // Deactivate the camera
            photoCaptureObject.StopPhotoModeAsync(OnStoppedPhotoMode);
        }
        else
        {
            Debug.Log("QR code not detected");
            statusText.text = "Scanning for QR code...";
            // Take another picture
            photoCaptureObject.TakePhotoAsync(OnCapturedPhotoToMemory);
        }
    }

    void OnStoppedPhotoMode(PhotoCapture.PhotoCaptureResult result)
    {
        // Shutdown the photo capture resource
        photoCaptureObject.Dispose();
        photoCaptureObject = null;
    }
}
