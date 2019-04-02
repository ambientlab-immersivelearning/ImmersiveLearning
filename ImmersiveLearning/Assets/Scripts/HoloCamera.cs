using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ZXing;

public class HoloCamera : MonoBehaviour
{
    WebCamTexture webcam;

    // Start is called before the first frame update
    void Start()
    {
        webcam = new WebCamTexture();
        webcam.Play();
        Debug.LogFormat("webcam: {0} {1} x {2}", webcam.deviceName, webcam.width, webcam.height);
    }

    public Texture2D TakePhoto()
    {
        Debug.Log("Take Photo");

        Texture2D webcamImage = new Texture2D(webcam.width, webcam.height);
        webcamImage.SetPixels(webcam.GetPixels());
        webcamImage.Apply();

        return webcamImage;
    }

    public void TakePhotoToPreview(Renderer preview)
    {
        Texture2D image = TakePhoto();
        preview.material.mainTexture = image;

        // update aspect ratio to match webcam
        float aspectRatio = (float)image.width / (float)image.height;
        Vector3 scale = preview.transform.localScale;
        scale.x = scale.y * aspectRatio;
        preview.transform.localScale = scale;

        Debug.Log("Extract QR code");
        /*
        // create a barcode reader instance
        var barcodeReader = new BarcodeReader();

        // create an in memory bitmap
        var barcodeBitmap = (Bitmap)Bitmap.FromFile(@"C:\Users\jeremy\Desktop\qrimage.bmp");

        // decode the barcode from the in memory bitmap
        var barcodeResult = barcodeReader.Decode(barcodeBitmap);

        // output results to console
        Debug.Log($"Decoded barcode text: {barcodeResult?.Text}");
        Debug.Log($"Barcode format: {barcodeResult?.BarcodeFormat}");
        }

        
                // create a barcode reader instance

                IBarcodeReader reader = new BarcodeReader();

                // get texture Color32 array

                var barcodeBitmap = image.GetPixels32();

                // detect and decode the barcode inside the Color32 array

                var result = reader.Decode(barcodeBitmap, image.width, image.height);

                // do something with the result

                if (result != null)

                {

                    Debug.Log(result.BarcodeFormat.ToString());

                    Debug.Log(result.Text);

                }
                else
                {
                    Debug.Log("could not read QR code");
                }
        */
    }
}
