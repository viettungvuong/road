using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnPlane : MonoBehaviour
{
    public struct aPlane
    {
        public GameObject gameObject;
        public bool movingPlane;
        public bool reached;
        public bool tapped;
    }
    public static SpawnPlane instance;
    public GameObject movingPlane, staticPlane;
    float x= -2.309999f, y= 0f;
    float xMovingUpper=0f, xMovingLower=-6f;
    float z = 32.2f;
    float addZ = 6.581f;
    public static List<aPlane> movingPlanes;
    static bool moving;
    public static float movingSpeed;
    private void Awake()
    {
        movingSpeed = 7f;
        moving = false;
        movingPlanes = new List<aPlane>();
        instance = this;
    }
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (movingPlanes.Count>0&&movingPlanes[0].tapped)
            movingPlanes.RemoveAt(0);
        for (int i=0; i<movingPlanes.Count; i++) 
        {
                    aPlane plane = movingPlanes[i];
                    if (movingPlanes[i].gameObject.transform.position.x <= xMovingLower && !movingPlanes[i].reached)
                    {
                        plane.reached = true;
                    }
                    else if (movingPlanes[i].gameObject.transform.position.x >= xMovingUpper && movingPlanes[i].reached)
                    {
                        plane.reached = false;
                    }
                    movingPlanes[i] = plane;
                    if (!movingPlanes[i].reached)
                        movingPlanes[i].gameObject.transform.position += new Vector3(-movingSpeed * Time.deltaTime, 0, 0);//khi move cai gi thi nen co cai Time.deltaTime
                    else
                        movingPlanes[i].gameObject.transform.position += new Vector3(movingSpeed * Time.deltaTime, 0, 0);                                                                      
        }    
    }

    GameObject spawnStatic()
    {
        return Instantiate(staticPlane, new Vector3(x, y, z), Quaternion.identity);
    }

    GameObject spawnMoving()
    {
        return Instantiate(movingPlane, new Vector3(x, y, z), Quaternion.identity);
    }
    

    public void createPlane()
    {
        aPlane plane = new aPlane();
        GameObject obj=null;
        if (!moving)
        {
            int rand = Random.Range(0, 10);
            if (0<=rand&&rand<=7)
            {
                obj = spawnMoving();
                plane.movingPlane = true;
            }
            else
            {
                obj = spawnStatic();
                plane.movingPlane = false;
            }
            moving = true;
        }
        else
        {
            obj = spawnStatic();
            plane.movingPlane = false;
            moving = false;
        }
        plane.reached = false;
        plane.tapped = false;
        plane.gameObject = obj;
        if (plane.movingPlane)
           movingPlanes.Add(plane);
        z += addZ;
    }
}
