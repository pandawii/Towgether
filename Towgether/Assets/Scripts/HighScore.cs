using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HighScore : MonoBehaviour
{
    public int score = 0;
    public int highScore = 0;
    string highScoreKey = "HighScore";

    void Start()
    {
        //Get the highScore from player prefs if it is there, 0 otherwise.
        highScore = PlayerPrefs.GetInt(highScoreKey, 0);
    }

   

    void OnDisable()
    {

    }
}
