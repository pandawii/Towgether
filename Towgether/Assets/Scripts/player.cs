using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class player : MonoBehaviour
{
    ParticleSystem Dust;
    Rigidbody2D rb;
    Animator anim;
    SpriteRenderer sp;
    
     
    
    [Header("Boost")]
    [SerializeField] float BoostCapacity;
    [SerializeField] float BoostCapacityMax;
    [SerializeField] float BoostCapacityCooldown;
    [SerializeField] float BoostCapacityCooldownMax;
    [SerializeField] bool IncreaseBoost;
    [SerializeField] BoostBar boostScript;

    [Header("GroundCheck")]
    [SerializeField] Transform GroundCheckPosition;
    [SerializeField] LayerMask WhatIsGround;
    [SerializeField] float CheckRaidus = 1f;
    [SerializeField] bool isGrounded;

    [Header("GroundCheck")]
    [SerializeField] float JumpForce = 40.3f;
    [SerializeField] float movementSpeed = 16.8f;
    [SerializeField] float movement = 0f;

    [Header("PowerUp")]
    [SerializeField] float timerForPowerUp;
    [SerializeField] float timerForPowerUpMax;
    
    
    private void Awake()
    {
        rb = GetComponent<Rigidbody2D>();
        anim = GetComponent<Animator>();
        sp = GetComponent<SpriteRenderer>();
        Dust = GetComponentInChildren<ParticleSystem>();
        BoostCapacityMax = 1f;
        BoostCapacity += BoostCapacityMax;
        BoostCapacityCooldown = 5f;
        BoostCapacityCooldownMax = 5f;
        IncreaseBoost = false;
        boostScript.SetMaxBoost(BoostCapacityMax);
        PoweredUp = false;
        timerForPowerUpMax = 5f;
        SoundManager.initialize();
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
        if (timerForPowerUp <= 0)
        {
            timerForPowerUp = 0f;
            PoweredUp = false;
        }


    }
   void HandleBoostUsage()
    {

        if (Input.GetMouseButton(0) && BoostCapacity > 0&&BoostCapacityCooldown>0&&!IncreaseBoost)
        {
         rb.AddForce(Vector2.up* 100f*Time.deltaTime, ForceMode2D.Impulse);
         BoostCapacity -= Time.deltaTime;
         Dust.Play();
        }
        else if (Input.GetMouseButtonUp(0))
        {
            Dust.Stop();
        }
        if (BoostCapacity < BoostCapacityMax || BoostCapacity <= 0)
        {
            BoostCapacityCooldown -= Time.deltaTime;

        }
        if (BoostCapacityCooldown <= 0)
        {
            IncreaseBoost = true;
            
            BoostCapacityCooldown = BoostCapacityCooldownMax;
        }
        if (IncreaseBoost)
        {
            BoostCapacity +=Time.deltaTime;
        }
        if (BoostCapacity >= 1f)
        {
            IncreaseBoost = false;

        }
        
        boostScript.setboost(BoostCapacity);
    }

    void Jumping()
    {
        
        if (Input.GetKeyDown(KeyCode.W) && isGrounded && PoweredUp)
        {
            Vector2 velocity = rb.velocity;
            velocity.y = JumpForce * 2f;
            rb.velocity = velocity;
            anim.SetTrigger("Jump");
            
            Dust.Play();
            SoundManager.PlaySound(SoundManager.Sound.Jump);

        }
        if (Input.GetKeyDown(KeyCode.W) && isGrounded&&!PoweredUp)
        {
            Vector2 velocity = rb.velocity;
            velocity.y = JumpForce*1.1f;
            rb.velocity = velocity;
            anim.SetTrigger("Jump");
            SoundManager.PlaySound(SoundManager.Sound.Jump);
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
            if (PoweredUp)
            {
                timerForPowerUp += timerForPowerUpMax;
            }
            SoundManager.PlaySound(SoundManager.Sound.PowerUp);
        }
       
        
    }



}
