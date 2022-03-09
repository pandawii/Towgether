using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class camera : MonoBehaviour
{
    public Transform Target;
    public float SmoothSpeed = .3f;
    Vector3 currentvelocity;
    bool playerStartedPlaying;
    [SerializeField] Transform player;
   [SerializeField] Transform Position_For_Camera_To_start_Moving;
    public enum Diffculty{ easy,medium,hard,impossible}
    float timer;
    int randomCameraGenerator;
    float timerMax;
    private void Awake()
    {
        playerStartedPlaying = false;
        timer = 0f;
        setDiffculty(Diffculty.easy);
        timerMax = 10f;
    }
    // Update is called once per frame
    private void Update()
    {
        timer += Time.deltaTime;
    }
    void LateUpdate()
    {
        if (player.position.y >= Position_For_Camera_To_start_Moving.position.y)
            playerStartedPlaying = true;

        if(playerStartedPlaying)
            setDiffculty(Diffculty.easy);

        if (Target.position.y > transform.position.y)
           {
             Vector3 newPos = new Vector3(transform.position.x, Target.position.y, transform.position.z);
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
               
            transform.position += new Vector3(0,4f, 0) * Time.deltaTime;
                timer -= Time.deltaTime;
                if (timer <= 0)
                {
                    randomCameraGenerator = Random.Range(1, 5);
                    timer += timerMax;
                    Debug.Log("1");
                }
            break;

            case Diffculty.medium:
              
                transform.position += new Vector3(0,5f, 0) * Time.deltaTime;
                timer -= Time.deltaTime;
                if (timer <= 0)
                {
                    randomCameraGenerator = Random.Range(1, 5);
                    timer += timerMax;
                    Debug.Log("2");
                }
                break;

            case Diffculty.hard:
                
                transform.position += new Vector3(0, 5.5f, 0) * Time.deltaTime;
                timer -= Time.deltaTime;
                if (timer <= 0)
                {
                    Debug.Log("3");
                    randomCameraGenerator = Random.Range(1, 5);
                    timer += timerMax;
                }
                break;

            case Diffculty.impossible:
                
                transform.position += new Vector3(0, 6.5f, 0) * Time.deltaTime;
                timer -= Time.deltaTime;
                if (timer <= 0)
                {
                    randomCameraGenerator = Random.Range(1, 5);
                    timer += timerMax;
                    Debug.Log("4");
                }
                break;
        }
    }
    private Diffculty GetDiffculty()
    {
       if(randomCameraGenerator  == 1) return Diffculty.impossible;
       if (randomCameraGenerator == 2) return Diffculty.hard;
       if (randomCameraGenerator == 3) return Diffculty.medium;
       

        return Diffculty.easy;
    }
    //if (timer >= 40) timer = 0;
    //        if (timer >= 30) return Diffculty.impossible;
    //        if (timer >= 20) return Diffculty.hard;
    //        if (timer >= 10) return Diffculty.medium;
}
