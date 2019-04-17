using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HoloToolkit.Unity;

public class NRSRManager : Singleton<NRSRManager>
{
    public Renderer[] ObjectsInScene;
    public List<GameObject> FilterObjectsInScene = new List<GameObject>();

    //Used to trigger next object update
    public int TotalNumberOfObjects = 0;
    public int PreviousFrameObjectCount = 0;

    //Just incase we need - numbers added should equal total number of objects
    public int numberofVisibleObjects;
    public int numberOfFilteredObjects;

    private void FixedUpdate()
    {
        FindObjectsInScene();

        TotalNumberOfObjects = ObjectsInScene.Length;

        if (TotalNumberOfObjects != PreviousFrameObjectCount)
        {
            FilterUnneededObjects();
            numberofVisibleObjects = FilterObjectsInScene.Count;

            foreach (GameObject go in FilterObjectsInScene)
            {

            }
        }

        PreviousFrameObjectCount = ObjectsInScene.Length;
    }

    private void FindObjectsInScene()
    {
        ObjectsInScene = null;
        ObjectsInScene = FindObjectsOfType<Renderer>();
    }

    private void FilterUnneededObjects()
    {
        FilterObjectsInScene.Clear();
        numberOfFilteredObjects = 0;

        for (int i = 0; i < ObjectsInScene.Length; i++)
        {
            if (ObjectsInScene[i].gameObject.tag != "NRSRTools")
            {
                FilterObjectsInScene.Add(ObjectsInScene[i].gameObject);
            }
            else
            {
                numberOfFilteredObjects++;
            }
        }
    }
}
