using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class Score : MonoBehaviour
{

    [SerializeField] Transform player;
    Text score;
    int highScore;
    int scorenum;
    string highScoreKey = "HighScore";
    [SerializeField] Text HighScoreText;
    void AddScore()
    {
        scorenum++;
    }
    private void Awake()
    {
        score = GetComponent<Text>();
        HighScoreText.text = PlayerPrefs.GetInt(highScoreKey,0).ToString();
    }
    void Update()                
    {
        
        if (player.position.y > 0&&player.position.y>scorenum)
        {
            AddScore();
        }
        score.text = scorenum.ToString("0m").Normalize();
        //If our scoree is greter than highscore, set new higscore and save.
        if (scorenum > PlayerPrefs.GetInt(highScoreKey, scorenum))
        {
           
            PlayerPrefs.SetInt(highScoreKey, scorenum);
            PlayerPrefs.Save();
            HighScoreText.text = scorenum.ToString();

        }

    }
}
