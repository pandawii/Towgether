using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class Score : MonoBehaviour
{

    [SerializeField] Transform player;
    Text score;
    int scorenum;
    void AddScore()
    {
        scorenum++;
    }
    private void Awake()
    {
        score = GetComponent<Text>();
        
    }
    void Update()                
    {
        
        if (player.position.y > 0&&player.position.y>scorenum)
        {
            AddScore();
        }
        score.text = scorenum.ToString("0");
    }
}
