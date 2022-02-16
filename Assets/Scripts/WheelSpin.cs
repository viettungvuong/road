using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WheelSpin : MonoBehaviour
{
    public float spinSpeed = 5f;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Game.started)
        {
            transform.Rotate(0,0,spinSpeed*Time.deltaTime);
        }
    }
}
