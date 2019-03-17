using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;
using UnityEditor.VersionControl;
using UnityEngine;
using UnityEngine.Networking;
using UnityScript.Scripting.Pipeline;

public class WWWHandler : MonoBehaviour {
    public string URLString = "https://github.com/ambientlab-immersivelearning/ImmersiveLearning/blob/objects/ImmersiveLearning/AssetBundles/StandaloneWindows/testbundle.unity3d";

    public List<Bundle> Assets;
    
    void Start() {
        StartCoroutine(GetAssetBundle());
    }
 
    IEnumerator GetAssetBundle() {
        Bundle bundle;
        List<AssetObject> objList = new List<AssetObject>();
        AssetBundle assetBundle;
        UnityWebRequest www = UnityWebRequestAssetBundle.GetAssetBundle("https://github.com/ambientlab-immersivelearning/ImmersiveLearning/raw/objects/ImmersiveLearning/AssetBundles/StandaloneWindows/testbundle.unity3d");
        yield return www.SendWebRequest();
 
        if(www.isNetworkError || www.isHttpError) {
            Debug.Log(www.error);
        }
        else {
            assetBundle = DownloadHandlerAssetBundle.GetContent(www);

            Debug.Log("Finished GET");
            
            TextAsset dataFile = assetBundle.LoadAsset("objects.json") as TextAsset;
            
            Debug.Log("JSON File: \n\"" + dataFile + "\"");

            string cleanData = Regex.Replace(dataFile.text, @"[^.0-9a-zA-Z]", "");

            Debug.Log("Cleaned String: \n\"" + cleanData + "\"");
            
            string dataNoType = Regex.Replace(cleanData, ".prefab", "\n");

            Debug.Log("Removed File Type: \n" + dataNoType);
                        
            string[] namesArray = Regex.Split(dataNoType, "\n");

            List<string> namesList = namesArray.ToList();
            
            for (int i = 0; i < namesList.Count; i++) {
                if (namesList[i] == "") {
                    namesList.RemoveAt(i);
                }
            }

            foreach (var objName in namesList) {
                Debug.Log(objName);
            }

            foreach (var objName in namesList) {
                var prefab = assetBundle.LoadAsset<GameObject>(objName);
                GameObject obj = Instantiate(prefab);
                AssetObject asset = new AssetObject(objName, obj);
                objList.Append(asset);
                asset.Object.SetActive(false);
            }

            assetBundle.Unload(false);
        }
    }
}

public class Bundle {
    public string Name;
    public List<AssetObject> Objects;
}

public class AssetObject {
    public string Name;
    public GameObject Object;
    
    public AssetObject(string name, GameObject obj) {
        Name = name;
        Object = obj;
    }
}