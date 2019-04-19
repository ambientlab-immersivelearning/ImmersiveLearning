using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;
using UnityEngine.UI;
using ZXing;

public class NenuQRCode : MonoBehaviour {
    private WebCamTexture camTexture;
    private Rect screenRect;

    public void Start() {
        screenRect = new Rect(0, 0, Screen.width, Screen.height);
        camTexture = new WebCamTexture();
        camTexture.requestedHeight = Screen.height;
        camTexture.requestedWidth = Screen.width;
        if (camTexture != null) {
            camTexture.Play();
        }
    }

    public void OnGUI() {
        // drawing the camera on screen
        GUI.DrawTexture(screenRect, camTexture, ScaleMode.ScaleToFit);
        // do the reading — you might want to attempt to read less often than you draw on the screen for performance sake

        IBarcodeReader barcodeReader = new BarcodeReader();
        
        // decode the current frame
        Result result = null;

        if (camTexture.isPlaying) {
            result = barcodeReader.Decode(camTexture.GetPixels32(), camTexture.width, camTexture.height);
        }

        if (result != null) {
            camTexture.Stop();
            string qrCode = result.Text;
            Debug.Log("DECODED TEXT FROM QR: " + result.Text);
            StartCoroutine(WWWHandler.GetAssetBundle(qrCode));
            enabled = false;
        } else {
            Debug.Log("Did not get QR");
        }
    }

    public static void ShowButtons() {
        Debug.Log("In show buttons");
    }
}