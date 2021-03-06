using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using static SpawnPlane;

public class Game : MonoBehaviour
{
    public List<Material> skyboxes;
    public static bool started;
    int score = 0;
    int cScore = -1;
    public GameObject startPanel,scoreText,gameOverPanel,highScore,car,pauseBtn;
    List<GameObject> planes;
    TextMeshProUGUI tmp,tmp2;
    public static Game instance;
    private void Awake()
    {
        started = false; //kiem tra bam start hay chua
        instance = this;
    }
    void Start()
    {
        Time.timeScale = 1;
        pauseBtn.SetActive(false);
        scoreText.SetActive(false);
        car.SetActive(false);
        planes = new List<GameObject>();
        planes.AddRange(GameObject.FindGameObjectsWithTag("Plane"));
        foreach (GameObject plane in planes)
            plane.SetActive(false);
        gameOverPanel.SetActive(false);
        tmp=scoreText.transform.GetChild(0).GetComponent<TextMeshProUGUI>(); //lay cai component diem
        tmp2 = highScore.GetComponent<TextMeshProUGUI>();
    }
    public void startBtn()
    {
        pauseBtn.SetActive(true);
        scoreText.SetActive(true);
        started = true;
        car.SetActive(true);
        foreach (GameObject plane in planes)
            plane.SetActive(true);
        startPanel.SetActive(false);
    }
    static bool inCameraRange(aPlane aplane)
    {
        return (aplane.gameObject.GetComponent<Renderer>().isVisible);
    }

    public static void nearestToCar(GameObject car)
    {
        if (SpawnPlane.movingPlanes.Count>0&&inCameraRange(SpawnPlane.movingPlanes[0]))
        {
            aPlane minPlane = SpawnPlane.movingPlanes[0];
            minPlane.tapped = true;
            SpawnPlane.movingPlanes[0] = minPlane;
        }
    }

    void Update()
    {
        /*if (Input.touchCount > 0&& Input.GetTouch(0).phase == TouchPhase.Began)
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
            RaycastHit hit = new RaycastHit();
            if (Physics.Raycast(ray, out hit))
            {
                Debug.Log(hit.collider.name);
                if (!hit.collider.CompareTag("pause"))
                {
                    nearestToCar(car);
                }
            }
        }*/
    }

    public void incrementScore()
    {
        score++;
        tmp.text=score.ToString();
        cScore++;
        if (cScore == 20)
            cScore = 0;
        changeSkbyox();
        if (score > 10)
        {
            SpawnPlane.movingSpeed = 6f;
            CarMove.instance.speed = 7f;
            SpawnPlane.upperLimit = 8;
        }
        if (score > 20)
        {
            SpawnPlane.movingSpeed = 7f;
            CarMove.instance.speed = 8f;
            SpawnPlane.upperLimit = 7;
        }
        if (score > 50)
        {
            SpawnPlane.movingSpeed = 7f;
            CarMove.instance.speed = 9f;
            SpawnPlane.upperLimit = 7;
        }
        if (score > 80)
        {
            SpawnPlane.movingSpeed = 7.5f;
            CarMove.instance.speed = 9f;
            SpawnPlane.upperLimit = 7;
        }
        if (score > 100)
        {
            SpawnPlane.movingSpeed = 8f;
            CarMove.instance.speed = 9f;
            SpawnPlane.upperLimit = 7;
        }
        if (score > 200)
        {
            SpawnPlane.movingSpeed = 9f;
            CarMove.instance.speed = 9.5f;
            SpawnPlane.upperLimit = 6;
        }
        if (score > 300)
        {
            SpawnPlane.movingSpeed = 9f;
            CarMove.instance.speed = 9.5f;
            SpawnPlane.upperLimit = 7;
        }
        if (score > 500)
        {
            SpawnPlane.movingSpeed = 10f;
            CarMove.instance.speed = 10f;
            SpawnPlane.upperLimit = 6;
        }
        if (score > 800)
        {
            SpawnPlane.movingSpeed = 11f;
            CarMove.instance.speed = 11f;
            SpawnPlane.upperLimit = 5;
        }
        if (score > 1000)
        {
            SpawnPlane.movingSpeed = 12f;
            CarMove.instance.speed = 12f;
            SpawnPlane.upperLimit = 5;
        }
        if (score > 2000)
        {
            SpawnPlane.movingSpeed = 14f;
            CarMove.instance.speed = 14f;
            SpawnPlane.upperLimit = 5;
        }
    }

    public void gameLose()
    {
        car.GetComponent<AudioSource>().Stop();
        GetComponent<AudioSource>().Play();
        gameOverPanel.SetActive(true);
        //mainGame.transform.position=new Vector3(-19.7f,mainGame.transform.position.y,mainGame.transform.position.z);
        if (PlayerPrefs.GetInt("HighScore", 0) < score)
            PlayerPrefs.SetInt("HighScore", score);
        tmp2.text = "Best: "+PlayerPrefs.GetInt("HighScore", 0).ToString();
        Time.timeScale = 0;
    }

    void changeSkbyox()
    {
        if (cScore == 0)
            RenderSettings.skybox = skyboxes[0];
        else if (cScore == 5)
            RenderSettings.skybox = skyboxes[1];
        else if (cScore == 10)
            RenderSettings.skybox = skyboxes[2];
        else if (cScore == 15)
            RenderSettings.skybox = skyboxes[3];
    }

    private void OnApplicationQuit()
    {
        Ads.instance.bannerView.Destroy();
    }
}
