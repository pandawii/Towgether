using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;
using UnityEngine.SceneManagement;

public class UIManager : MonoBehaviour
{
    //scripts
    player PlayerScript;

    //GameObjects
    GameObject Press_Any_where_To_Start;
    [SerializeField]GameObject GameOverMenu;
    //Transform
    Transform positionTORestart;
    Transform Player_transform;
    Rigidbody2D rb;



    void Awake()
    {
        //Refrences
        PlayerScript = GameObject.Find("Player").GetComponent<player>();
        positionTORestart = GameObject.Find("PositionToRestart").transform;
        Player_transform = GameObject.Find("Player").transform;
        rb = GameObject.Find("Player").GetComponent<Rigidbody2D>();
        

        Time.timeScale = 0f;
        PlayerScript.enabled = false;
        rb.bodyType = RigidbodyType2D.Static;
        GameOverMenu.SetActive(false);
    }


    void Update()
    {
        if (Input.anyKey)
        {
            GameStarted();
        }
        if (Player_transform.transform.position.y < positionTORestart.position.y) 
        {
             GameLost();
        }
    }
    private void GameStarted()
    {
        Debug.Log("GameStarted");
        Time.timeScale = 1f;
        PlayerScript.enabled = true;
        rb.bodyType = RigidbodyType2D.Dynamic;
    }
    private void GameLost()
    {     
            Debug.Log("Lost");
            PlayerScript.enabled = false;
            rb.bodyType = RigidbodyType2D.Static;
            GameOverMenu.SetActive(true);
    }
  

    public void RestartButton()
    {
        SceneManager.LoadScene("base");
    }
        
}
