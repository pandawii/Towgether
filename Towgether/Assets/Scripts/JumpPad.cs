using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JumpPad : MonoBehaviour
{
    Animator anim;
    [SerializeField]Animator playeranim;
    float bounce = 70f;
   
    private void Awake()
    {
        anim = GetComponent<Animator>();
        
    }
    private void Update()
    {
       
    }
    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            collision.gameObject.GetComponent<Rigidbody2D>().AddForce(Vector2.up * bounce, ForceMode2D.Impulse);
            anim.SetTrigger("Jumped");
            
            
        }
    }
}
