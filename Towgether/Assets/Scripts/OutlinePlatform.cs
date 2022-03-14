using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OutlinePlatform : MonoBehaviour
{


    [Header("rightPLatform")]
     float speed = 6f;
     int direction = 1;


    void Update()
    {


        if (transform.position.x > 24f)
        {
            direction = -1;
        }
        if (transform.position.x < -24f)
        {
            direction = 1;
        }
       
        
        transform.position += new Vector3(1, 0, 0) * direction * speed * Time.deltaTime;
    }
    
    
}
