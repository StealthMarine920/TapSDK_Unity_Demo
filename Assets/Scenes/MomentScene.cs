using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TapSDK;

public class MomentScene : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        message = "动态页面";

        TDSMoment.InitSDK("FwFdCIr6u71WQDQwQN");

        TDSMoment.SetCallback((code, msg) =>
        {
            Debug.Log("moment 回调" + msg + "----");
            message = "状态码: " + code + "  message:  " + msg;
        });
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public static string message;

    private void OnGUI()
    {
        GUIStyle style = new GUIStyle(GUI.skin.button);
        style.fontSize = 35;

        GUIStyle labelStyle = new GUIStyle(GUI.skin.label);
        labelStyle.fontSize = 25;
        labelStyle.alignment = TextAnchor.MiddleLeft;

        GUI.depth = 0;

        if (GUI.Button(new Rect(60, 88, 160, 80), "打开动态", style)) {
            TDSMoment.OpenMoment(Orientation.ORIENTATION_DEFAULT);
        }

        if (GUI.Button(new Rect(60, 198, 160, 80), "动态红点", style)) {

            TDSMoment.GetNoticeData();
        }

        if (GUI.Button(new Rect(60, 308, 160, 80), "返回", style)) {
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(0);
        }

        GUI.Label(new Rect(60, 400, 300, 300), message, labelStyle);
    }
}
