using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

public class UIHandler : MonoBehaviour
{
    public void OnResetClick()
    {
        DropdownHandler.reset = true;

        WWWHandler.DestroyAssets();
        if (NenuQRCode.state != NenuQRCode.State.Scanning)
        {
            NenuQRCode.state = NenuQRCode.State.Preparing;
        }
    }
   
}
