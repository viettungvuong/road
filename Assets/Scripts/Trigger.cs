using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Trigger : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Fail"))
            Game.instance.gameLose();
        if (gameObject.CompareTag("Wheel")) {
            if (other.gameObject.CompareTag("SpawnTrigger"))
                SpawnPlane.instance.createPlane();
            else if (other.gameObject.CompareTag("ScoreDetector"))
            {
                Game.instance.incrementScore();
                //GetComponent<AudioSource>().Play(); 
            }
        }
    }
}
