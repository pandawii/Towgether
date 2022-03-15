using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class TryHarder : MonoBehaviour
{
    bool GameStarted;
    float timer;
   [SerializeField] Text StartText;
    [SerializeField] GameObject PressAnykeyObject;
    [SerializeField] player player;
    private void Awake()
    {
        PressAnykeyObject.SetActive(true);
        GameStarted = false;
        timer = 3f;
        player.enabled = false;
    }
    void Update()
    {
        if (Input.anyKey) {
            GameStarted=true;
        }
        if (GameStarted)
        {
            timer-= Time.deltaTime;
        }
        if (timer < 2&&timer>1) StartText.text="3";
        if (timer < 1&&timer>0) StartText.text = "2";
        if (timer <= 0)
        {
            StartText.text = "1";
            
        }
        if (timer <= -1) {
            PressAnykeyObject.SetActive(false);
            player.enabled = true;
        }
    }
}
