using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AudioBtn : MonoBehaviour
{
    static bool audioOn = true;
    public List<Texture> images;
    void Start()
    {
        if (!audioOn)
        {
            GetComponent<RawImage>().texture = images[1];
        }
        else
        {
            GetComponent<RawImage>().texture = images[0];
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void turnAudio()
    {
        if (audioOn)
        {
            audioOn = false;
            GetComponent<RawImage>().texture = images[1];
            AudioListener.pause = true;
        }
        else
        {
           AudioListener.pause = false;
           audioOn = true;
           GetComponent<RawImage>().texture = images[0];
        }
    }
}
