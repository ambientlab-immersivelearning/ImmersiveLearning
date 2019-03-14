using System.Collections;
using System.Collections.Generic;
using UnityEditor.VersionControl;
using UnityEngine;
using UnityEngine.Networking;

public class WWWHandler : MonoBehaviour {
    public string URLString = "https://github.com/ambientlab-immersivelearning/ImmersiveLearning/blob/objects/ImmersiveLearning/AssetBundles/StandaloneWindows/testbundle.unity3d";
    
    void Start() {
        StartCoroutine(GetAssetBundle());
    }
 
    IEnumerator GetAssetBundle() {
        string AssetName;
        AssetBundle bundle;
        UnityWebRequest www = UnityWebRequestAssetBundle.GetAssetBundle("https://github.com/ambientlab-immersivelearning/ImmersiveLearning/raw/objects/ImmersiveLearning/AssetBundles/StandaloneWindows/testbundle.unity3d");
        yield return www.SendWebRequest();
 
        if(www.isNetworkError || www.isHttpError) {
            Debug.Log(www.error);
        }
        else {
            bundle = DownloadHandlerAssetBundle.GetContent(www);
            
            AssetName = "TestCube2";
        
            if (AssetName == "TestCube2") {
                Instantiate(bundle.mainAsset);
            } else {
                Instantiate(bundle.LoadAsset(AssetName));
                // Unload the AssetBundles compressed contents to conserve memory
                bundle.Unload(false);
            }
        }
        Debug.Log("Finished GET");
    }
}