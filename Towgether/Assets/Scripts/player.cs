using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class player : MonoBehaviour
{
    [SerializeField] ParticleSystem Dust;
    [SerializeField] ParticleSystem Dust2;
    
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

    [Header("jumping")]
    [SerializeField] float movementSpeed = 16.8f;
    [SerializeField] float movement = 0f;
    [SerializeField] float jumpforce = 30f;
    [SerializeField] bool Jumprequest;

    [Header("PowerUp")]
    [SerializeField] float timerForPowerUp;
    [SerializeField] float timerForPowerUpMax;
    bool soundPlayed;
    private void Awake()
    {
        
        rb = GetComponent<Rigidbody2D>();
        anim = GetComponent<Animator>();
        sp = GetComponent<SpriteRenderer>();       
        BoostCapacityMax = 1f;
        BoostCapacity += BoostCapacityMax;
        BoostCapacityCooldown = 5f;
        BoostCapacityCooldownMax = 5f;
        IncreaseBoost = false;
        boostScript.SetMaxBoost(BoostCapacityMax);
        timerForPowerUpMax = 5f;
        SoundManager.initialize();
    }
  
   

    void Update()
    {
        isGrounded = Physics2D.OverlapCircle(GroundCheckPosition.position, CheckRaidus, WhatIsGround);
        anim.SetBool("Isgrounded", isGrounded);

        movement = Input.GetAxis("Horizontal")* movementSpeed;
        Handlingflip();

       
        rb.velocity = new Vector2( movement, rb.velocity.y);
        anim.SetFloat("Speed", Mathf.Abs(movement));


        HandleJump();
        HandleBoostUsage();
        timeForPowerUpHandler();



    }
     void FixedUpdate()
    {
        BetterJumpFeel();
    }
    public float fallmutliplier = 2.5f;
    public float lowJumpMutliplier = 2f;
    
    void HandleBoostUsage()
    {

        if ((Input.GetKey(KeyCode.LeftControl)|| (Input.GetKey(KeyCode.LeftShift) || Input.GetMouseButton(0)) && BoostCapacity > 0&&BoostCapacityCooldown>0&&!IncreaseBoost))
        {
         rb.AddForce(Vector2.up* 120f*Time.deltaTime, ForceMode2D.Impulse);
         BoostCapacity -= Time.deltaTime;
         Dust.Play();
        }
        else if (Input.GetKeyUp(KeyCode.LeftControl)|| Input.GetKeyUp(KeyCode.LeftShift)||Input.GetMouseButtonUp(0))
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
            soundPlayed = true;
        }
        if (BoostCapacity >= 1f&&soundPlayed)
        {
            IncreaseBoost = false;
            SoundManager.PlaySound(SoundManager.Sound.FullChargeBoost);
            soundPlayed = false;
        }
        
        boostScript.setboost(BoostCapacity);
    }
    void HandleJump()
    {
        if ((Input.GetKeyDown(KeyCode.Space)|| Input.GetKeyDown(KeyCode.W)) && isGrounded && timerForPowerUp > 0)
        {
            Jumprequest = true;
            anim.SetTrigger("Jump");
            Dust2.Play();
            SoundManager.PlaySound(SoundManager.Sound.Jump);
        }
        if ((Input.GetKeyDown(KeyCode.Space) || Input.GetKeyDown(KeyCode.W)) && isGrounded && timerForPowerUp > 0&& ((Input.GetKeyDown(KeyCode.LeftControl) || Input.GetMouseButtonDown(0) || (Input.GetKey(KeyCode.LeftShift)))))
        {
            Jumprequest = true;
            anim.SetTrigger("Jump");           
            Dust2.Play();
            Dust.Play();
            SoundManager.PlaySound(SoundManager.Sound.Jump);
        }
        if ((Input.GetKeyDown(KeyCode.Space) || Input.GetKeyDown(KeyCode.W)) && isGrounded && timerForPowerUp <= 0)
        {
            Jumprequest = true;
            anim.SetTrigger("Jump");
            SoundManager.PlaySound(SoundManager.Sound.Jump);
        }
    }
    void BetterJumpFeel()
    {

        if (Jumprequest && timerForPowerUp > 0 && (Input.GetKey(KeyCode.LeftControl)||(Input.GetKey(KeyCode.LeftShift)||Input.GetMouseButton(0))))
        {
            GetComponent<Rigidbody2D>().AddForce(Vector2.up * 120f * Time.deltaTime, ForceMode2D.Impulse);

            Jumprequest = false;
        }
        if (Jumprequest && timerForPowerUp > 0)
        {
            GetComponent<Rigidbody2D>().AddForce(Vector2.up * jumpforce * 2.2f, ForceMode2D.Impulse);

            Jumprequest = false;
        }
        if (Jumprequest && timerForPowerUp <= 0)
        {
            GetComponent<Rigidbody2D>().AddForce(Vector2.up * jumpforce, ForceMode2D.Impulse);
            Jumprequest = false;
        }

        if (rb.velocity.y < 0)
        {
            rb.gravityScale = fallmutliplier;
        }
        else if (rb.velocity.y > 0 && (!Input.GetKey(KeyCode.Space)||!Input.GetKey(KeyCode.W)))
        {
            rb.gravityScale = lowJumpMutliplier;
        }
        else
        {
            rb.gravityScale = 9f;
        }
    }
    void timeForPowerUpHandler()
    {
        if (timerForPowerUp > 0)
        {
            timerForPowerUp -= Time.deltaTime;
        }
        if (timerForPowerUp <= 0)
        {
            timerForPowerUp = 0f;
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


    private void OnTriggerEnter2D(Collider2D col)
    {
        if (col.gameObject.CompareTag("Arrow"))
        {
            Debug.Log("player");

            timerForPowerUp += timerForPowerUpMax;

            SoundManager.PlaySound(SoundManager.Sound.PowerUp);
        }
    }

    
}
