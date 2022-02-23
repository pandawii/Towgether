using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class woodenPlatForm : MonoBehaviour
{

    // Use this for initialization
     float speed = 4f;
     float RotAngleYMin = 45;
     float RotAngleYMax = -45;
    bool PlayerTouched;
    void Start()
    {
        PlayerTouched = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (PlayerTouched) { 
            float rY = Mathf.SmoothStep(RotAngleYMin, RotAngleYMax, Mathf.PingPong(Time.time * speed, 1));
        transform.rotation = Quaternion.Euler(0, 0, rY);
                
        }
    }
    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            PlayerTouched = true;
        }
    }
}
