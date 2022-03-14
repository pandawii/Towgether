using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class levelgen : MonoBehaviour
{
    Vector3 startPosition1 = new Vector3(0f, 110f, 0f);
    Vector3 startposition2 = new Vector3(0f, 110f, 0f);
    Vector3 startposition3 = new Vector3(0f, 110, 0f);

    Vector3 firstPlatforms =new Vector3(0,5f,0);
    Vector3 firstPlatforms2 = new Vector3(0, 5f, 0);
    Vector3 firstPlatforms3 = new Vector3(0, 5f, 0);
    float Timer;
    float maxTimer;
    List<Platform> PlatformList;
    bool GameStarted;
    [SerializeField] private Transform PositionToDelete;
    [SerializeField] Transform player;
    int counter_To_Spawn_JumpPad;
    int random_num_to_spawn_ToChoose_jumppad;

    int Counter_for_platforms;
    int RandomForTypeOfPlatform;
    float yRangeRandom = 10f;
    float yRangeRandom2 = 12f;
    [SerializeField] Rigidbody2D rb;

    public enum PlatformEnum { platform,  woodPlatform, pinkplatform, OutlinePlatformPlatform, DissolvingPlatform }

    private void Awake()
    {
        PlatformList = new List<Platform>();
        maxTimer = 0.15f;
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
            Transform platform3 = Instantiate(GameAssets.Getinstance().platform, firstPlatforms3, Quaternion.identity);

            firstPlatforms.x = Random.Range(-24, -17.4f);
            firstPlatforms2.x = Random.Range(-10, 10);
            firstPlatforms3.x = Random.Range(17.4f, 24);

            firstPlatforms.y += Random.Range(yRangeRandom, yRangeRandom2);
            firstPlatforms2.y += Random.Range(yRangeRandom, yRangeRandom2);
            firstPlatforms3.y += Random.Range(yRangeRandom, yRangeRandom2);
            Platform platform = new Platform(platform1, platform2, platform3);
            PlatformList.Add(platform);
            if (i <= 20)
            {
                HandleJumpPadSpawn(platform1,platform2, platform3);
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
        if (player.position.y>15f)
        {
            GameStarted = true;
        }
        if (GameStarted)
        {
            Timer -= Time.deltaTime;
            if (Timer <= 0&&rb.velocity.y<100f)
            {
                Debug.Log(rb.velocity.y);
                setPlatform(GetPlatform());
                Timer += maxTimer;
            }else if( rb.velocity.y > 100f)
            {
                Debug.Log(rb.velocity.y);
                setPlatform(GetPlatform());
                
            }
        }
    }
    
    void CreatePlatform(Vector3 SpawnPosition1, Vector3 SpawnPosition2, Vector3 SpawnPosition3, Transform platform1,Transform platform2, Transform platform3)
    {
        

         platform1 = Instantiate(platform1,SpawnPosition1, Quaternion.identity);
         platform2 = Instantiate(platform2, SpawnPosition2, Quaternion.identity);
         platform3 = Instantiate(platform2, SpawnPosition3, Quaternion.identity);

        SpawnPosition1.x = Random.Range(-24, -17.4f);
        SpawnPosition2.x = Random.Range(-10, 10);
        SpawnPosition3.x = Random.Range(17.4f, 24);

        SpawnPosition1.y += Random.Range(yRangeRandom, yRangeRandom2);
        SpawnPosition2.y += Random.Range(yRangeRandom, yRangeRandom2);
        SpawnPosition3.y += Random.Range(yRangeRandom, yRangeRandom2);

        startPosition1 = SpawnPosition1;
        startposition2 = SpawnPosition2;
        startposition3 = SpawnPosition3;
        Platform platform = new Platform(platform1, platform2, platform3);
        PlatformList.Add(platform);
        HandleJumpPadSpawn(platform1,platform2, platform3);
        Counter_for_platforms++;

    }
    void HandleJumpPadSpawn(Transform platform1,Transform platform2, Transform platform3)
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
                    JumpPad.position += new Vector3(0, 1.15f, 0);
                    JumpPad.SetParent(platform1);
                }
                break;
            case 2:
                if (counter_To_Spawn_JumpPad % 7 == 0)
                {

                    Transform Trap = Instantiate(GameAssets.Getinstance().Trap);
                   
                    Trap.position = platform1.position;
                    Trap.position += new Vector3(1.38f, 1.77f, 0);
                    Trap.SetParent(platform1);
                }
                break;
            case 3:
                if (counter_To_Spawn_JumpPad % 6 == 0)
                {

                    Transform PowerUp = Instantiate(GameAssets.Getinstance().PowerUp);
                    
                    PowerUp.position = platform1.position;
                    PowerUp.position += new Vector3(0, 1.64f, 0);
                    PowerUp.SetParent(platform1);
                }
                break;
            case 4:
                if (counter_To_Spawn_JumpPad % 5 == 0)
                {

                    //instantiate jump pad
                    Transform JumpPad = Instantiate(GameAssets.Getinstance().Jump_pad);
                    
                    JumpPad.position = platform2.position;
                    JumpPad.position += new Vector3(0, 1.15f, 0);
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
                if (counter_To_Spawn_JumpPad %3== 0)
                {

                    Transform PowerUp = Instantiate(GameAssets.Getinstance().PowerUp);
                    
                    PowerUp.position = platform2.position;
                    PowerUp.position += new Vector3(0, 1.64f, 0);
                    PowerUp.SetParent(platform2);
                }
                break;
            case 7:
                if (counter_To_Spawn_JumpPad % 5 == 0)
                {

                    //instantiate jump pad
                    Transform JumpPad = Instantiate(GameAssets.Getinstance().Jump_pad);

                    JumpPad.position = platform3.position;
                    JumpPad.position += new Vector3(0, 1.15f, 0);
                    JumpPad.SetParent(platform3);
                }
                break;
            case 8:
                if (counter_To_Spawn_JumpPad % 4 == 0)
                {

                    Transform Trap = Instantiate(GameAssets.Getinstance().Trap);

                    Trap.position = platform3.position;
                    Trap.position += new Vector3(1.54f, 1.5f, 0);
                    Trap.SetParent(platform3);
                }
                break;
            case 9:
                if (counter_To_Spawn_JumpPad % 3 == 0)
                {

                    Transform PowerUp = Instantiate(GameAssets.Getinstance().PowerUp);

                    PowerUp.position = platform3.position;
                    PowerUp.position += new Vector3(0, 1.64f, 0);
                    PowerUp.SetParent(platform3);
                }
                break;


        }
    }

    private void setPlatform(PlatformEnum diffculty)
    {
        switch (diffculty)
        {
            case PlatformEnum.platform:
                
                CreatePlatform(startPosition1, startposition2, startposition3, GameAssets.Getinstance().platform,GameAssets.Getinstance().platform, GameAssets.Getinstance().platform);
                break;

           

            case PlatformEnum.pinkplatform:
                
                CreatePlatform(startPosition1, startposition2, startposition3, GameAssets.Getinstance().WoodPlatform, GameAssets.Getinstance().WoodPlatform, GameAssets.Getinstance().WoodPlatform);
                break;

            case PlatformEnum.OutlinePlatformPlatform:
                
                CreatePlatform(startPosition1, startposition2, startposition3, GameAssets.Getinstance().DissolvingPlatform, GameAssets.Getinstance().DissolvingPlatform, GameAssets.Getinstance().DissolvingPlatform);
                break;
            case PlatformEnum.woodPlatform:
                
                CreatePlatform(startPosition1, startposition2, startposition3, GameAssets.Getinstance().OutlinePlatformPlatform, GameAssets.Getinstance().OutlinePlatformPlatform, GameAssets.Getinstance().OutlinePlatformPlatform);
                break;

            case PlatformEnum.DissolvingPlatform:
                
                CreatePlatform(startPosition1, startposition2, startposition3, GameAssets.Getinstance().PinkPlatform, GameAssets.Getinstance().PinkPlatform, GameAssets.Getinstance().PinkPlatform);
                break;

            
        }
    }
    private PlatformEnum GetPlatform()
    {
        
        if (Counter_for_platforms%15==0)
            RandomForTypeOfPlatform = Random.Range(0,5);
        
        
            if (RandomForTypeOfPlatform == 1) return PlatformEnum.DissolvingPlatform;
            if (RandomForTypeOfPlatform == 2) return PlatformEnum.woodPlatform;
            if (RandomForTypeOfPlatform == 3) return PlatformEnum.platform;
            if (RandomForTypeOfPlatform == 4) return PlatformEnum.pinkplatform;
            

         return PlatformEnum.OutlinePlatformPlatform;
        
    }
    private class Platform
    {
        private Transform platform;
        private Transform platform2;
        private Transform platform3;
        public Platform(Transform platform, Transform platform2, Transform platform3)
        {
            this.platform = platform;
            this.platform2 = platform2;
            this.platform3 = platform3;
        }
        public float GetYposition()
        {
            return platform.position.y;
        }
        public void DestroySelf()
        {
            Destroy(platform.gameObject);
            Destroy(platform2.gameObject);
            Destroy(platform3.gameObject);
        }

    }

    
}
