using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TapDBScene : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private string serveName;
    private string userName;
    private string level;

    private void OnGUI()
    {
        GUIStyle style = new GUIStyle(GUI.skin.button);
        style.fontSize = 35;

        GUIStyle labelStyle = new GUIStyle(GUI.skin.label);
        labelStyle.fontSize = 35;
        labelStyle.alignment = TextAnchor.MiddleLeft;


        GUI.Label(new Rect(40, 100, 120, 50), "服务器", labelStyle);
        GUI.Label(new Rect(40, 180, 120, 50), "用户名", labelStyle);
        GUI.Label(new Rect(40, 260, 120, 50), "用户等级", labelStyle);
        GUI.Label(new Rect(40, 340, 120, 50), "充值", labelStyle);
        GUI.Label(new Rect(40, 420, 120, 50), "事件", labelStyle);


        GUIStyle inputStyle = new GUIStyle(GUI.skin.textArea);
        inputStyle.fontSize = 35;
        serveName = GUI.TextArea(new Rect(180, 100, 100, 50), serveName, inputStyle);
        userName = GUI.TextArea(new Rect(180, 180, 100, 50), userName, inputStyle);
        level = GUI.TextArea(new Rect(180, 260, 100, 50), level, inputStyle);

        if (GUI.Button(new Rect(300, 100, 160, 60), "服务器", style))
        {

        }

        if (GUI.Button(new Rect(300, 180, 160, 60), "用户名", style))
        {

        }

        if (GUI.Button(new Rect(300, 260, 160, 60), "等级", style))
        {

        }

        if (GUI.Button(new Rect(180, 340, 160, 60), "充值", style))
        {

        }

        if (GUI.Button(new Rect(180, 420, 160, 60), "事件", style))
        {

        }


        if (GUI.Button(new Rect(40, 500, 160, 80), "返回", style))
        {
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(0);
        }
    }
}
