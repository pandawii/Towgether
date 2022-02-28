using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Arrow : MonoBehaviour
{


     void OnCollisionEnter2D(Collision2D col)
    {
        if (col.gameObject.CompareTag("Player"))
        {
            Debug.Log("Arrow");
            Destroy(gameObject);
           Instantiate(GameAssets.Getinstance().Explosion, gameObject.transform.position, Quaternion.identity);

        }
    }

}
