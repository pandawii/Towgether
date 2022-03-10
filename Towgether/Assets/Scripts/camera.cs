using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class camera : MonoBehaviour
{
    
    float SmoothSpeed = .3f;
    Vector3 currentvelocity;
    bool playerStartedPlaying;
    [SerializeField] Transform player;
    [SerializeField] Transform Position_For_Camera_To_start_Moving;
    [SerializeField] Transform positionTODelete;
    public enum Diffculty{ easy,medium,hard,impossible}
    float timer;
   
   
    private void Awake()
    {
        playerStartedPlaying = false;
        timer = 0f;
        setDiffculty(Diffculty.easy);
       
    }
    // Update is called once per frame
    private void Update()
    {
        timer += Time.deltaTime;
        if (player.transform.position.y < positionTODelete.position.y)
        {
            SceneManager.LoadScene("base");

        }
    }
    void LateUpdate()
    {
        if (player.position.y >= Position_For_Camera_To_start_Moving.position.y)
            playerStartedPlaying = true;

        if(playerStartedPlaying)
            setDiffculty(Diffculty.easy);

        if (player.position.y > transform.position.y)
           {
             Vector3 newPos = new Vector3(transform.position.x, player.position.y, transform.position.z);
             transform.position = Vector3.SmoothDamp(transform.position, newPos, ref currentvelocity, SmoothSpeed * Time.deltaTime);

           }

        if(playerStartedPlaying)
        setDiffculty(GetDiffculty());
        
      
    }
    private void setDiffculty(Diffculty diffculty)
    {
        switch (diffculty)
        {
            case Diffculty.easy:
               
            transform.position += new Vector3(0,5f, 0) * Time.deltaTime;
              
                
            break;

            case Diffculty.medium:
              
                transform.position += new Vector3(0,5.5f, 0) * Time.deltaTime;
              

                break;

            case Diffculty.hard:
                
                transform.position += new Vector3(0, 7f, 0) * Time.deltaTime;
            

                break;

            case Diffculty.impossible:
                
                transform.position += new Vector3(0, 7.3f, 0) * Time.deltaTime;

                break;
        }
    }
    private Diffculty GetDiffculty()
    {
        if (timer >= 70) return Diffculty.impossible;
        if (timer >= 30) return Diffculty.hard;      
        if (timer  >= 10) return Diffculty.medium;
       
       

       return Diffculty.easy;
    }
      
}
