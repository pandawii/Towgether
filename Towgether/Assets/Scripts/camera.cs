using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine;

public class camera : MonoBehaviour
{
    
    float SmoothSpeed = .3f;
    Vector3 currentvelocity;
    Vector2 currentvelocity2d;
    bool playerStartedPlaying;
    [SerializeField] Transform player;
    [SerializeField] Transform Position_For_Camera_To_start_Moving;
    [SerializeField] Transform positionTODelete;
    [SerializeField] Transform positionTORestart;
    [SerializeField] GameObject GameOverMenu;
    [SerializeField] GameObject InGameMenu;
    [SerializeField] GameObject PauseButton;
    [SerializeField] player PlayerScript;
    [SerializeField] GameObject MainMenu;
    [SerializeField] Animator MainMenuAnim;
    [SerializeField] GameObject AfterStart;
    [SerializeField] Image Pause;
    [SerializeField] Text ScoreNumber;
    [SerializeField] Image Boost;
    [SerializeField] Text PressAnyKeyToplay;
    [SerializeField] levelgen levelgen;
    [SerializeField] Rigidbody2D rb;
    GameObject Player;
    float timerforStartButton;
    
    public enum Diffculty{ easy,medium,hard,impossible}
    float timer;
    bool startButtonPressed;
    float alpha;

    private void Awake()
    {
        playerStartedPlaying = false;
        timer = 0f;
        setDiffculty(Diffculty.easy);
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
    // Update is called once per frame
    public void RestartButton()
    {
        SceneManager.LoadScene("base");
    }
    public void StartButton()
    {
        startButtonPressed = true;
        
    }
    private void Update()
    {
        
        timer += Time.deltaTime;
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
            MainMenuAnim.SetBool("Pressed", startButtonPressed);
            Pause.color = new Vector4(Pause.color.r, Pause.color.g, Pause.color.b, alpha) ;
            ScoreNumber.color = new Vector4(ScoreNumber.color.r, ScoreNumber.color.g, ScoreNumber.color.b, alpha);
            Boost.color = new Vector4(Boost.color.r, Boost.color.g, Boost.color.b, alpha);
            PressAnyKeyToplay.color = new Vector4(PressAnyKeyToplay.color.r, PressAnyKeyToplay.color.g, PressAnyKeyToplay.color.b, alpha);
        
        }
        if(timerforStartButton <= 0)
        {
            Player.SetActive(true);
            MainMenu.SetActive(false);           
            if (Input.anyKeyDown)
            {
                levelgen.enabled = true;
                rb.bodyType = RigidbodyType2D.Dynamic;
            }
        }
    }
    void LateUpdate()
    {
        if (player.position.y >= Position_For_Camera_To_start_Moving.position.y)
            playerStartedPlaying = true;

        if(playerStartedPlaying)
            setDiffculty(Diffculty.easy);

        if (player.position.y > transform.position.y)
           {
             Vector3 newPos = new Vector3(transform.position.x, player.position.y, transform.position.z);
             transform.position = Vector3.SmoothDamp(transform.position, newPos, ref currentvelocity, SmoothSpeed * Time.deltaTime);

           }

        if(playerStartedPlaying)
        setDiffculty(GetDiffculty());
        
      
    }
    private void setDiffculty(Diffculty diffculty)
    {
        switch (diffculty)
        {
            case Diffculty.easy:
               
            transform.position += new Vector3(0,6f, 0) * Time.deltaTime;
              
                
            break;

            case Diffculty.medium:
              
                transform.position += new Vector3(0,6.5f, 0) * Time.deltaTime;
              

                break;

            case Diffculty.hard:
                
                transform.position += new Vector3(0, 7.5f, 0) * Time.deltaTime;
           

                break;

            case Diffculty.impossible:
                
                transform.position += new Vector3(0, 8f, 0) * Time.deltaTime;

                break;
        }
    }
    private Diffculty GetDiffculty()
    {
        if (timer >= 44) return Diffculty.impossible;
        if (timer >= 25) return Diffculty.hard;      
        if (timer  >= 10) return Diffculty.medium;
       
       

       return Diffculty.easy;
    }
      
}
