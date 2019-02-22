using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class WWWHandler : MonoBehaviour {
    public string ObjectUrl = "https://raw.githubusercontent.com/ambientlab-immersivelearning/ImmersiveLearning/objects/ImmersiveLearning/Assets/Prefabs/Cube.prefab";

    public GameObject temp;
    
    IEnumerator Start() {
        using (UnityWebRequest www = UnityWebRequest.Get(ObjectUrl)) {
            yield return www;
            Instantiate(www);
        }
    }
}