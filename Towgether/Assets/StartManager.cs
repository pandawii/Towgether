using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine;

public class StartManager : MonoBehaviour
{

    bool started;
    [SerializeField] Image StartMenu;
    [SerializeField] Text StartText;

 
    private void Awake()
    {
        started = false;
    }
    public void StartButton()
    {
        started = true;
        Debug.Log("Pressed");

    }
    void Update()
    {
        if (started)
        {
            Move_Start_Menu_To_The_Left();
        }   
        

    }
    void Move_Start_Menu_To_The_Left()
    {
        
        float A_StartMenu = StartMenu.color.a;
        float A_StartText = StartText.color.a;

        A_StartMenu -= Time.deltaTime;
        A_StartText -=Time.deltaTime;

        Vector4 alpha_Menu =new Vector4(StartMenu.color.r, StartMenu.color.g, StartMenu.color.b, A_StartMenu);
        Vector4 alpha_Text = new Vector4(StartText.color.r, StartText.color.g, StartText.color.b, A_StartText);

        StartMenu.color = alpha_Menu;
        StartText.color = alpha_Text;

        if (A_StartMenu <= 0)
        {
            SceneManager.LoadScene("base");
        }
    }
}
