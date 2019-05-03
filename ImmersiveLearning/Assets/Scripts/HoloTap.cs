using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.WSA.Input;
using UnityEngine.Events;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class HoloTap : MonoBehaviour
{
    public LayerMask layermask;

    [Tooltip("The event fired on a Holo tap.")]
    public UnityEvent Tap;

    GestureRecognizer recognizer;

    Vector3 headPosition;
    Vector3 gazeDirection;

    void Update()
    {
#if UNITY_EDITOR
        // simulate tap with mouse button
        if (Input.GetMouseButtonDown(0))
        {
            Recognizer_TappedEvent(
                InteractionSourceKind.Other,
                1,
                Camera.main.ScreenPointToRay(Input.mousePosition));
        }
#endif
    }

    void Awake()
    {
        recognizer = new GestureRecognizer();
        recognizer.SetRecognizableGestures(GestureSettings.Tap);
        recognizer.StartCapturingGestures();
    }

    void OnEnable()
    {
        recognizer.TappedEvent += Recognizer_TappedEvent;
    }

    void OnDisable()
    {
        recognizer.TappedEvent -= Recognizer_TappedEvent;
    }

    private void Recognizer_TappedEvent(InteractionSourceKind source, int tapCount, Ray headRay)
    {
        Tap.Invoke();
    }

    public void OnTap()
    {

        Debug.Log("\nLOG (HoloTap.cs) : RECIEVED TAP");
         
        GameObject target = null;

        if (!EventSystem.current.IsPointerOverGameObject())
        {
            Debug.Log("\nLOG (HoloTap.cs) : Pointer over game object");

            RaycastHit hitInfo;
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            if (Physics.Raycast(ray, out hitInfo, 200.0f, layermask))
            {
                if (hitInfo.collider != null)
                {
                    target = hitInfo.collider.gameObject;
                }
            }
        }

        if (target != null)
        {
            switch (target.tag)
            {
                case ("ResetButton"):
                    Debug.Log("\nLOG (HoloTap.cs) : tag 'ResetButton'");
                    target.GetComponent<Button>().onClick.Invoke();
                    break;
                default:
                    Debug.Log("\nLOG (HoloTap.cs) : tag ''");
                    break;
            }
        } else
        {
            Debug.Log("\nLOG (HoloTap.cs) : ERROR. No target received");
        }

    }
}
