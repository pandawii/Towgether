using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameAssets : MonoBehaviour
{
    private static GameAssets instance;

    public static GameAssets Getinstance()
    {
        return instance;
    }
    private void Awake()
    {
        instance = this;
    }

    public Transform platform;
    public Transform Jump_pad;
    public Transform Trap;
    public Transform Explosion;
    public Transform PowerUp;
}
