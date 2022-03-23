using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;
using UnityEngine.SceneManagement;

public class UIManager : MonoBehaviour
{
     Transform player;
     Transform positionTORestart;
     GameObject GameOverMenu;
     GameObject InGameMenu;
     GameObject PauseButton;
     player PlayerScript;
     GameObject AfterStart;
     Image Pause;
     Text ScoreNumber;
     Image Boost;
     Text PressAnyKeyToplay;
     levelgen levelgen;
     Rigidbody2D rb;

    GameObject Player;
    float timerforStartButton;
   
    public enum Diffculty { easy, medium, hard, impossible }
    
    bool startButtonPressed;
    float alpha;

    public void RestartButton()
    {
        SceneManager.LoadScene("base");
    }

    void Awake()
    {
        
        GameOverMenu.SetActive(false);
        InGameMenu.SetActive(true);
        PauseButton.SetActive(true);
        PlayerScript.enabled = true;
        Player = GameObject.Find("Player");
        Player.SetActive(false);
        timerforStartButton = 1f;
        startButtonPressed = false;
        levelgen.enabled = false;
        alpha = 0;
        Time.timeScale = 1;
        rb.bodyType = RigidbodyType2D.Static;


    }


    void Update()
    {
        if (player.transform.position.y < positionTORestart.position.y)
        {
            Debug.Log("Lost");
            GameOverMenu.SetActive(true);
            InGameMenu.SetActive(false);
            PauseButton.SetActive(false);
            PlayerScript.enabled = false;
            Player.SetActive(false);
        }
        if (startButtonPressed)
        {
            AfterStart.SetActive(true);
            alpha += Time.deltaTime;
            timerforStartButton -= Time.deltaTime;
            Pause.color = new Vector4(Pause.color.r, Pause.color.g, Pause.color.b, alpha);
            ScoreNumber.color = new Vector4(ScoreNumber.color.r, ScoreNumber.color.g, ScoreNumber.color.b, alpha);
            Boost.color = new Vector4(Boost.color.r, Boost.color.g, Boost.color.b, alpha);
            PressAnyKeyToplay.color = new Vector4(PressAnyKeyToplay.color.r, PressAnyKeyToplay.color.g, PressAnyKeyToplay.color.b, alpha);

        }
        if (timerforStartButton <= 0)
        {
            Player.SetActive(true);
            if (Input.anyKeyDown)
            {
                levelgen.enabled = true;
                rb.bodyType = RigidbodyType2D.Dynamic;
            }
        }
    }
}
