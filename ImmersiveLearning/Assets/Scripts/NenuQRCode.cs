using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.WSA.WebCam;
using ZXing;

public class NenuQRCode : MonoBehaviour {
    public enum State
    {
        Preparing,
        Scanning,
        Displaying
    };

    public static State state;

    public Text statusText;
    public Dropdown dropdown;

    private WebCamTexture camTexture;
    private Rect screenRect;

    GameObject quad = null;
    Renderer quadRenderer;
    Resolution cameraResolution;

    private void Start()
    {
        // Get Camera specs
        cameraResolution = PhotoCapture.SupportedResolutions.OrderByDescending((res) => res.width * res.height).First();
        
        // Create a GameObject to which the texture can be applied
        quad = GameObject.CreatePrimitive(PrimitiveType.Quad);
        quadRenderer = quad.GetComponent<Renderer>() as Renderer;
        quadRenderer.material = new Material(Shader.Find("Unlit/Texture"));

        quad.transform.parent = this.transform;
        quad.transform.position = new Vector3(-0.6f, 0.0f, 3.0f);
        quad.transform.localScale = new Vector3(0.25f, 0.25f, 0.25f);

        // Get Dropdown menu

        NenuQR();
    }

    public void NenuQR()
    {
        // Display quad
        quadRenderer.enabled = true;

        camTexture = new WebCamTexture();
        camTexture.requestedHeight = cameraResolution.height;
        camTexture.requestedWidth = cameraResolution.width;

        if (camTexture != null) {
            camTexture.Play();
        }

        state = State.Scanning;
    }

    public void Update() {
        if (state == State.Preparing)
        {
            NenuQR();
        }
        else if (state == State.Scanning)
        {
            // drawing the camera on screen
            quadRenderer.material.SetTexture("_MainTex", camTexture);

            IBarcodeReader barcodeReader = new BarcodeReader();

            // decode the current frame
            Result result = null;

            if (camTexture.isPlaying)
            {
                result = barcodeReader.Decode(camTexture.GetPixels32(), camTexture.width, camTexture.height);
            }

            if (result != null)
            {
                camTexture.Stop();

                string qrCode = result.Text;

                Debug.Log("DECODED TEXT FROM QR: " + result.Text);
                statusText.text = "";

                state = State.Displaying;

                StartCoroutine(WWWHandler.GetAssetBundle(qrCode));

                // disable quad
                quadRenderer.enabled = false;
            }
            else
            {
                Debug.Log("Did not get QR");
                statusText.text = "Scanning for QR code...";
            }
        }
    }
}