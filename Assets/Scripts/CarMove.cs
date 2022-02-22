using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CarMove : MonoBehaviour
{
    public static CarMove instance;
    public float speed;

    private void Awake()
    {
        instance = this;
    }
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Game.started)
           transform.position+=new Vector3(0,0,speed*Time.deltaTime);
    }


}
