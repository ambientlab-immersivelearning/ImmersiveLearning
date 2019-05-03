using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class DropdownHandler : MonoBehaviour
{
    public static bool repopulate = false;
    public static bool reset = false;

    public Dropdown objDropdown;

    private void Update()
    {
        if (repopulate)
        {
            PopulateDropdown();
        }
        else if(reset)
        {
            objDropdown.ClearOptions();
        }
    }

    private void PopulateDropdown()
    {
        List<Bundle> bundleList = WWWHandler.Assets;
        List<String> objNames = new List<string>();

        foreach(var bundle in bundleList)
        {
            foreach (var obj in bundle.Objects)
            {
                objNames.Add(obj.Name);
            }
        }

        objDropdown.ClearOptions();
        objDropdown.AddOptions(objNames);

        repopulate = false;
    }

    public void OnDDChanage(int selection)
    {
        // Take object name selected 
        string objName = objDropdown.options[selection].text;

        // Look for object with same name in Assets
        List<Bundle> bundleList = WWWHandler.Assets;
        foreach (var bundle in bundleList)
        {
            foreach (var obj in bundle.Objects)
            {
                if(obj.Name == objName)
                {
                    obj.Object.GetComponent<Renderer>().enabled = true;
                }
                else
                {
                    obj.Object.GetComponent<Renderer>().enabled = false;
                }
            }
        }
    }
}
