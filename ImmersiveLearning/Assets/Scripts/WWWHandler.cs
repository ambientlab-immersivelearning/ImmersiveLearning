using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.Networking;

public class WWWHandler : MonoBehaviour {
    public static List<Bundle> Assets = new List<Bundle>();
    
    public static IEnumerator GetAssetBundle(string url) {
        Bundle bundle = new Bundle();
        List<AssetObject> objList = new List<AssetObject>();
        UnityWebRequest www = UnityWebRequestAssetBundle.GetAssetBundle(url + '/');
        yield return www.SendWebRequest();

        if (www.isNetworkError || www.isHttpError) {
            if (www.isNetworkError){
                Debug.Log("Network Error: " + www.error + ". Prevented exception.");
                Debug.Log("URL at Error: '" + url + "'");
            }
            else if (www.isHttpError) {
                throw new Exception("WWW download had an error:" + www.error);
            }
        }

        AssetBundle assetBundle = DownloadHandlerAssetBundle.GetContent(www);

        Debug.Log("LOG: Asset Bundled download completed.");

        // Get name of asset bundle from info.json
        TextAsset infoFile = assetBundle.LoadAsset("info.json") as TextAsset;

        if (infoFile == null) {
            Debug.Log("ERROR: ~/info.json not found.");
        } else {
            string cleanName = Regex.Replace(infoFile.text, @"[^.0-9a-zA-Z]", "");

            Debug.Log("LOG: Asset Bundle " + cleanName + " found.");

            string nameNoType = Regex.Replace(cleanName, ".unity3d", "");

            bundle.Name = nameNoType;
        }

        // Get names of objects in asset bundle from objects.json
        TextAsset dataFile = assetBundle.LoadAsset("objects.json") as TextAsset;

        if (dataFile == null) {
            throw new Exception("FATAL ERROR: ~/objects.json not found. Cannot load objects.");
        }

        string cleanData = Regex.Replace(dataFile.text, @"[^.0-9a-zA-Z]", "");

        string dataNoType = Regex.Replace(cleanData, ".prefab", "\n");

        string[] namesArray = Regex.Split(dataNoType, "\n");

        List<string> namesList = namesArray.ToList();

        for (int i = 0; i < namesList.Count; i++) {
            if (namesList[i] == "") {
                namesList.RemoveAt(i);
            }
        }

        Debug.Log("LOG: Object name parsing completed.");

        foreach (var objName in namesList)
        {
            var prefab = assetBundle.LoadAsset<GameObject>(objName);
            GameObject obj = Instantiate(prefab);
            AssetObject asset = new AssetObject(objName, obj);
            objList.Add(asset);

            if (obj.GetComponentsInChildren<Transform>().Length > 0)
            {
                Transform[] children = obj.GetComponentsInChildren<Transform>(); 

                Debug.Log("LOG (WWWHandler.cs): Number of children: " + (children.Length - 1));

                foreach (Transform child in children)
                {
                    if (child.gameObject.GetInstanceID() != obj.GetInstanceID())
                    {
                        child.gameObject.GetComponent<Renderer>().enabled = true;
                    }
                }
            }
            else
            {

                asset.Object.GetComponent<Renderer>().enabled = true;
            }
        }

        Debug.Log("Objects: " + objList.Count);

        bundle.Objects = objList;

        foreach (var obj in objList) {
            Debug.Log(bundle.Name + " Asset: " + obj.Name);
        }

        Assets.Add(bundle);

        DropdownHandler.repopulate = true;
        
        Debug.Log("Before Unload.");
        
        assetBundle.Unload(false);
        
        Debug.Log("Finished Task.");
    }

    // Used to clear Assets List when scanning new QR code
    public static void DestroyAssets()
    {
        if (Assets.Count != 0)
        {
            Debug.Log("LOG: List Assets contains objects: " + Assets);

            foreach (Bundle b in Assets)
            {
                foreach (AssetObject _object in b.Objects)
                {
                    GameObject obj = _object.Object;

                    Transform[] children = obj.GetComponentsInChildren<Transform>();

                    Debug.Log("LOG (WWWHandler.cs): Number of children: " + children.Length);

                    if (children.Length > 0)
                    {
                        // If Object is a parent of other GameObjects
                        foreach (Transform child in children)
                        {
                            Destroy(child.GetComponent<GameObject>());
                        }
                    }
                    Destroy(obj);
                }
                b.Objects.Clear();
            }

            Assets.Clear();

            Debug.Log("LOG: Cleared List Assets");
        } else
        {
            Debug.Log("LOG: List Assests is already empty.");
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

