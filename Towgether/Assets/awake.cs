using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class awake : MonoBehaviour
{
    Image sp;
    float alpha = 0.5f;
    bool Started = false;
    private void Awake()
    {
        sp = GetComponent<Image>();
        alpha = 0;
        Started = true;
        sp.color = new Color(0, 0, 0, 0f);
    }
    private void Update()
    {
        if (Started)
        {
            if (alpha < 0.7f)
                alpha += 0.1f;

            sp.color = new Color(0, 0, 0, alpha);
        }

    }

}
