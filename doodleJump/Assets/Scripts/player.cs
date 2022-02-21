using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class player : MonoBehaviour
{
    [SerializeField] ParticleSystem Dust;
   public float movementSpeed = 8.9f;
    float movement = 0f;
    Rigidbody2D rb;
    public float JumpForce = 20f;
    Animator anim;
    SpriteRenderer sp;
    [SerializeField] Transform GroundCheckPosition;
    [SerializeField]LayerMask WhatIsGround;
    float CheckRaidus = 0.5f;   
    bool isGrounded;

    float BoostCapacity;
    float BoostCapacityMax;
    float BoostCapacityCooldown;
    float BoostCapacityCooldownMax;

    public BoostBar boostScript;

    float timerForPowerUp;
    float timerForPowerUpMax;
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        anim = GetComponent<Animator>();
        sp = GetComponent<SpriteRenderer>();
        BoostCapacityMax = 1;
        BoostCapacity += BoostCapacityMax;
        BoostCapacityCooldown = 7f;
        BoostCapacityCooldownMax = 7f;
        boostScript.SetMaxBoost(BoostCapacityMax);
        PoweredUp = false;
        timerForPowerUpMax = 5f;
        timerForPowerUp = 5f;
    }

    
    void Update()
    {
        isGrounded = Physics2D.OverlapCircle(GroundCheckPosition.position, CheckRaidus, WhatIsGround);
        anim.SetBool("Isgrounded", isGrounded);

        movement = Input.GetAxis("Horizontal")* movementSpeed;
        Handlingflip();

        Jumping();
        rb.velocity = new Vector2( movement, rb.velocity.y);
        anim.SetFloat("Speed", Mathf.Abs(movement));
       
       

        HandleBoostUsage();
        if (PoweredUp)
        {
            timerForPowerUp -= Time.deltaTime;
        }


    }
   void HandleBoostUsage()
    {

        if (Input.GetMouseButton(0) && BoostCapacity > 0)
        {
            rb.AddForce(Vector2.up * 0.6f, ForceMode2D.Impulse);
            BoostCapacity -= Time.deltaTime;
            Dust.Play();
        }
        else if (Input.GetMouseButtonUp(0)){
            Dust.Stop();
        }
        if (BoostCapacity < BoostCapacityMax || BoostCapacity <= 0)
        {
            BoostCapacityCooldown -= Time.deltaTime;
           
        }
        if (BoostCapacityCooldown <= 0)
        {
            BoostCapacity = BoostCapacityMax;
            BoostCapacityCooldown = BoostCapacityCooldownMax;
        }

            
        boostScript.setboost(BoostCapacity);
    }
    void Jumping()
    {
        
        if (Input.GetKeyDown(KeyCode.W) && isGrounded&&!PoweredUp)
        {
            Vector2 velocity = rb.velocity;
            velocity.y = JumpForce;
            rb.velocity = velocity;
            anim.SetTrigger("Jump");
            
        }
         if(Input.GetKeyDown(KeyCode.W) && isGrounded && PoweredUp)
        {
            Vector2 velocity = rb.velocity;
            velocity.y = JumpForce*1.5f;
            rb.velocity = velocity;
            anim.SetTrigger("Jump");
            Debug.Log("poweredup");
            Dust.Play();
        }
        
    }
    void Handlingflip()
    {
        if (movement < 0)
        {
            flip(true);
           
        }
        else
        {
            flip(false);
           
        }

    }
    void flip(bool IsLookingLeft)
    {

        sp.flipX = IsLookingLeft;
       
    }
    bool PoweredUp;
    void OnCollisionEnter2D(Collision2D col)
    {
        if (col.gameObject.CompareTag("Arrow"))
        {
            PoweredUp = true;
            
        }
        if (timerForPowerUp <= 0)
        {
            PoweredUp = false;
            timerForPowerUp += timerForPowerUpMax;
        }
        
    }



}
