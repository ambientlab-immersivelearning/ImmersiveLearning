using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using ZXing;

public class NenuQRCode : MonoBehaviour
{
    private WebCamTexture camTexture;
    private Rect screenRect;

    [Header("Set In Inspector")]
    public string qrCodeLink;
    public Text text;

    void Start()
    {
        screenRect = new Rect(0, 0, Screen.width, Screen.height);
        camTexture = new WebCamTexture();
        camTexture.requestedHeight = Screen.height;
        camTexture.requestedWidth = Screen.width;
        if (camTexture != null)
        {
            camTexture.Play();
        }
    }

    void OnGUI()
    {
        // drawing the camera on screen
        GUI.DrawTexture(screenRect, camTexture, ScaleMode.ScaleToFit);
        // do the reading — you might want to attempt to read less often than you draw on the screen for performance sake
        try
        {
            IBarcodeReader barcodeReader = new BarcodeReader();
            // decode the current frame
            var result = barcodeReader.Decode(camTexture.GetPixels32(),
              camTexture.width, camTexture.height);
            if (result != null)
            {
                qrCodeLink = result.Text;
                text.text = qrCodeLink;
                Debug.Log("DECODED TEXT FROM QR: " + result.Text);
            }
            else
            {
                text.text = "NO QR CODE";
                Debug.Log("Did not get QR");
            }
        }
        catch (System.Exception ex) { Debug.LogWarning(ex.Message); }
    }

    void Update()
    {
        
    }
}
