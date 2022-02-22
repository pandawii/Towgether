using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class levelgen : MonoBehaviour
{
    Vector3 startPosition1 = new Vector3(0f, 165f, 0f);
    Vector3 startposition2 = new Vector3(0f, 165f, 0f);

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

    public enum PlatformEnum { platform, redplatform, woodPlatform, pinkplatform, OutlinePlatformPlatform, DissolvingPlatform }

    private void Awake()
    {
        PlatformList = new List<Platform>();
        maxTimer = .1f;
        GameStarted = false;
        Counter_for_platforms = 0;

        setPlatform(PlatformEnum.platform);
    }
    private void Start()
    {
        
        for (int i = 0; i < 30; i++)
        {
            Transform platform1 = Instantiate(GameAssets.Getinstance().platform, firstPlatforms, Quaternion.identity);
            Transform platform2 = Instantiate(GameAssets.Getinstance().platform, firstPlatforms2, Quaternion.identity);

            firstPlatforms.x = Random.Range(-8.200961f, -1.97f);
            firstPlatforms2.x = Random.Range(2.91f, 8.200961f);

            firstPlatforms.y += Random.Range(4f, 7f);
            firstPlatforms2.y += Random.Range(4f, 7f);
            
            Platform platform = new Platform(platform1, platform2);
            PlatformList.Add(platform);
            if (i <= 20)
            {
                HandleJumpPadSpawn(firstPlatforms, firstPlatforms2);
            }
        }
    }

    void Update()
    {

        HandlePlatFormDeletion();
        SpawnTimer();
        setPlatform(GetPlatform());
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
                CreatePlatform(startPosition1, startposition2);
                Timer += maxTimer;
            }
        }
    }
    
    void CreatePlatform(Vector3 SpawnPosition1, Vector3 SpawnPosition2)
    {
        

        Transform platform1 = Instantiate(GameAssets.Getinstance().platform, SpawnPosition1, Quaternion.identity);
        Transform platform2 = Instantiate(GameAssets.Getinstance().platform, SpawnPosition2, Quaternion.identity);

        SpawnPosition1.x = Random.Range(-8.200961f, -1.97f);
        SpawnPosition2.x = Random.Range(2.91f, 8.200961f);

        SpawnPosition1.y += Random.Range(4f, 7f);
        SpawnPosition2.y += Random.Range(4f, 7f);

        startPosition1 = SpawnPosition1;
        startposition2 = SpawnPosition2;

        Platform platform = new Platform(platform1, platform2);
        PlatformList.Add(platform);
        HandleJumpPadSpawn(SpawnPosition1,SpawnPosition2);
        Counter_for_platforms++;

    }
    void HandleJumpPadSpawn(Vector3 spawnposition1,Vector3 spawnposition2)
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
                    JumpPad.position = spawnposition1;
                    JumpPad.position += new Vector3(0, 0.735f, 0); 
                }
                break;
            case 2:
                if (counter_To_Spawn_JumpPad % 8 == 0)
                {

                    Transform Trap = Instantiate(GameAssets.Getinstance().Trap);
                    Trap.position = spawnposition1;
                    Trap.position += new Vector3(1.54f, 1.5f, 0);
                }
                break;
            case 3:
                if (counter_To_Spawn_JumpPad % 8 == 0)
                {

                    Transform PowerUp = Instantiate(GameAssets.Getinstance().PowerUp);
                    PowerUp.position = spawnposition1;
                    PowerUp.position += new Vector3(0, 1.38f, 0);
                }
                break;
            case 4:
                if (counter_To_Spawn_JumpPad % 8 == 0)
                {

                    //instantiate jump pad
                    Transform JumpPad = Instantiate(GameAssets.Getinstance().Jump_pad);
                    JumpPad.position = spawnposition2;
                    JumpPad.position += new Vector3(0, 0.735f, 0);
                }
                break;
            case 5:
                if (counter_To_Spawn_JumpPad % 8 == 0)
                {

                    Transform Trap = Instantiate(GameAssets.Getinstance().Trap);
                    Trap.position = spawnposition2;
                    Trap.position += new Vector3(1.54f, 1.5f, 0);
                }
                break;
            case 6:
                if (counter_To_Spawn_JumpPad % 8 == 0)
                {

                    Transform PowerUp = Instantiate(GameAssets.Getinstance().PowerUp);
                    PowerUp.position = spawnposition2;
                    PowerUp.position += new Vector3(0, 1.38f, 0);
                }
                break;


        }
    }

    private void setPlatform(PlatformEnum diffculty)
    {
        switch (diffculty)
        {
            case PlatformEnum.platform:
                Debug.Log("0");
                break;

            case PlatformEnum.redplatform:
                Debug.Log("1");
                break;

            case PlatformEnum.pinkplatform:
                Debug.Log("2");
                break;

            case PlatformEnum.OutlinePlatformPlatform:
                Debug.Log("3");
                break;
            case PlatformEnum.woodPlatform:
                Debug.Log("4");
                break;

            case PlatformEnum.DissolvingPlatform:
                Debug.Log("5");
                break;

            
        }
    }
    private PlatformEnum GetPlatform()
    {        
        if (Counter_for_platforms >= 200) return PlatformEnum.DissolvingPlatform;
        if (Counter_for_platforms >= 160) return PlatformEnum.woodPlatform;
        if (Counter_for_platforms >= 120) return PlatformEnum.OutlinePlatformPlatform; 
        if (Counter_for_platforms >= 80) return PlatformEnum.pinkplatform;
        if (Counter_for_platforms >= 40) return PlatformEnum.redplatform;
        return PlatformEnum.platform;
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
