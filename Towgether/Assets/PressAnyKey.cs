using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PressAnyKey : MonoBehaviour
{
    private void Awake()
    {
        Time.timeScale = 0;
    }
    void Update()
    {
        if (Input.anyKeyDown)
        {
            
            Time.timeScale = 1;
        }
    }
}
