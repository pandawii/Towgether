using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OutlinePlatform : MonoBehaviour
{


    [Header("rightPLatform")]
     float speed = 2.0f;
     int direction = 1;


    void Update()
    {


        if (transform.position.x > 8.4f)
        {
            direction = -1;
        }
        if (transform.position.x < 2.9f)
        {
            direction = 1;
        }
       
        
        transform.position += new Vector3(1, 0, 0) * direction * speed * Time.deltaTime;
    }
    
    
}
