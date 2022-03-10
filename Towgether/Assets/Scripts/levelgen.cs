using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class levelgen : MonoBehaviour
{
    Vector3 startPosition1 = new Vector3(0f, 75f, 0f);
    Vector3 startposition2 = new Vector3(0f, 75f, 0f);

    Vector3 firstPlatforms=new Vector3(0,-1,0);
    Vector3 firstPlatforms2 = new Vector3(0, -1, 0);
    float Timer;
    float maxTimer;
    List<Platform> PlatformList;
    bool GameStarted;
    [SerializeField] private Transform PositionToDelete;

    int counter_To_Spawn_JumpPad;
    int random_num_to_spawn_ToChoose_jumppad;

    int Counter_for_platforms;
    int RandomForTypeOfPlatform;
    public enum PlatformEnum { platform, redplatform, woodPlatform, pinkplatform, OutlinePlatformPlatform, DissolvingPlatform }

    private void Awake()
    {
        PlatformList = new List<Platform>();
        maxTimer = 0.24f;
        GameStarted = false;
        Counter_for_platforms = 0;
        RandomForTypeOfPlatform = 0;
        setPlatform(PlatformEnum.platform);
    }
    private void Start()
    {
        
        for (int i = 0; i < 10; i++)
        {
            Transform platform1 = Instantiate(GameAssets.Getinstance().platform, firstPlatforms, Quaternion.identity);
            Transform platform2 = Instantiate(GameAssets.Getinstance().platform, firstPlatforms2, Quaternion.identity);

            firstPlatforms.x = Random.Range(-8.200961f, -1.97f);
            firstPlatforms2.x = Random.Range(2.43f, 8.200961f);

            firstPlatforms.y += Random.Range(6f, 9f);
            firstPlatforms2.y = firstPlatforms.y;
            
            Platform platform = new Platform(platform1, platform2);
            PlatformList.Add(platform);
            if (i <= 20)
            {
                HandleJumpPadSpawn(platform1,platform2);
            }
        }
    }

    void Update()
    {

        HandlePlatFormDeletion();
        SpawnTimer();
        
    }
    void HandlePlatFormDeletion()
    {
        for (int i = 0; i < PlatformList.Count; i++)
        {
            Platform platform = PlatformList[i];
                if (platform.GetYposition() < PositionToDelete.position.y)
                {
                    platform.DestroySelf();
                    PlatformList.Remove(platform);
                    i--;
                }
            
        }
       
    }
    void SpawnTimer()
    {
        if (Input.GetKeyDown(KeyCode.W))
        {
            GameStarted = true;
        }
        if (GameStarted)
        {
            Timer -= Time.deltaTime;
            if (Timer <= 0)
            {
                
                setPlatform(GetPlatform());
                Timer += maxTimer;
            }
        }
    }
    
    void CreatePlatform(Vector3 SpawnPosition1, Vector3 SpawnPosition2,Transform platform1,Transform platform2)
    {
        

         platform1 = Instantiate(platform1,SpawnPosition1, Quaternion.identity);
         platform2 = Instantiate(platform2, SpawnPosition2, Quaternion.identity);

        SpawnPosition1.x = Random.Range(-8.5f, -1.75f);
        SpawnPosition2.x = Random.Range(8.5f, 1.76f);

        SpawnPosition1.y += Random.Range(6f, 9f);
        SpawnPosition2.y = SpawnPosition1.y;

        startPosition1 = SpawnPosition1;
        startposition2 = SpawnPosition2;

        Platform platform = new Platform(platform1, platform2);
        PlatformList.Add(platform);
        HandleJumpPadSpawn(platform1,platform2);
        Counter_for_platforms++;

    }
    void HandleJumpPadSpawn(Transform platform1,Transform platform2)
    {
        counter_To_Spawn_JumpPad++;
        random_num_to_spawn_ToChoose_jumppad = Random.Range(1, 7);
        switch (random_num_to_spawn_ToChoose_jumppad)
        {
            case 1:
                if (counter_To_Spawn_JumpPad % 8 == 0)
                {
                   
                    //instantiate jump pad
                    Transform JumpPad = Instantiate(GameAssets.Getinstance().Jump_pad);
                    
                    JumpPad.position = platform1.position;
                    JumpPad.position += new Vector3(0, 0.735f, 0);
                    JumpPad.SetParent(platform1);
                }
                break;
            case 2:
                if (counter_To_Spawn_JumpPad % 5 == 0)
                {

                    Transform Trap = Instantiate(GameAssets.Getinstance().Trap);
                   
                    Trap.position = platform1.position;
                    Trap.position += new Vector3( 1.54f, 1.5f, 0);
                    Trap.SetParent(platform1);
                }
                break;
            case 3:
                if (counter_To_Spawn_JumpPad % 4 == 0)
                {

                    Transform PowerUp = Instantiate(GameAssets.Getinstance().PowerUp);
                    
                    PowerUp.position = platform1.position;
                    PowerUp.position += new Vector3(0, 1.60f, 0);
                    PowerUp.SetParent(platform1);
                }
                break;
            case 4:
                if (counter_To_Spawn_JumpPad % 4 == 0)
                {

                    //instantiate jump pad
                    Transform JumpPad = Instantiate(GameAssets.Getinstance().Jump_pad);
                    
                    JumpPad.position = platform2.position;
                    JumpPad.position += new Vector3(0, 0.735f, 0);
                    JumpPad.SetParent(platform2);
                }
                break;
            case 5:
                if (counter_To_Spawn_JumpPad % 4 == 0)
                {

                    Transform Trap = Instantiate(GameAssets.Getinstance().Trap);
                    
                    Trap.position = platform2.position;
                    Trap.position += new Vector3(1.54f, 1.5f, 0);
                    Trap.SetParent(platform2);
                }
                break;
            case 6:
                if (counter_To_Spawn_JumpPad %4 == 0)
                {

                    Transform PowerUp = Instantiate(GameAssets.Getinstance().PowerUp);
                    
                    PowerUp.position = platform2.position;
                    PowerUp.position += new Vector3(0, 1.60f, 0);
                    PowerUp.SetParent(platform2);
                }
                break;


        }
    }

    private void setPlatform(PlatformEnum diffculty)
    {
        switch (diffculty)
        {
            case PlatformEnum.platform:
                
                CreatePlatform(startPosition1, startposition2,GameAssets.Getinstance().platform,GameAssets.Getinstance().platform);
                break;

            case PlatformEnum.redplatform:
               
                CreatePlatform(startPosition1, startposition2, GameAssets.Getinstance().RedPlatform, GameAssets.Getinstance().RedPlatform);
                break;

            case PlatformEnum.pinkplatform:
                
                CreatePlatform(startPosition1, startposition2, GameAssets.Getinstance().WoodPlatform, GameAssets.Getinstance().WoodPlatform);
                break;

            case PlatformEnum.OutlinePlatformPlatform:
                
                CreatePlatform(startPosition1, startposition2, GameAssets.Getinstance().DissolvingPlatform, GameAssets.Getinstance().DissolvingPlatform);
                break;
            case PlatformEnum.woodPlatform:
                
                CreatePlatform(startPosition1, startposition2, GameAssets.Getinstance().OutlinePlatformPlatform, GameAssets.Getinstance().OutlinePlatformPlatform);
                break;

            case PlatformEnum.DissolvingPlatform:
                
                CreatePlatform(startPosition1, startposition2, GameAssets.Getinstance().PinkPlatform, GameAssets.Getinstance().PinkPlatform);
                break;

            
        }
    }
    private PlatformEnum GetPlatform()
    {
        
        if (Counter_for_platforms%15==0)
            RandomForTypeOfPlatform = Random.Range(0,6);
        
        
            if (RandomForTypeOfPlatform == 1) return PlatformEnum.DissolvingPlatform;
            if (RandomForTypeOfPlatform == 2) return PlatformEnum.woodPlatform;
            if (RandomForTypeOfPlatform == 3) return PlatformEnum.platform;
            if (RandomForTypeOfPlatform == 4) return PlatformEnum.pinkplatform;
            if (RandomForTypeOfPlatform == 5) return PlatformEnum.redplatform; 

         return PlatformEnum.OutlinePlatformPlatform;
        
    }
    private class Platform
    {
        private Transform platform;
        private Transform platform2;
        public Platform(Transform platform, Transform platform2)
        {
            this.platform = platform;
            this.platform2 = platform2;
        }
        public float GetYposition()
        {
            return platform.position.y;
        }
        public void DestroySelf()
        {
            Destroy(platform.gameObject);
            Destroy(platform2.gameObject);
        }

    }

    
}
