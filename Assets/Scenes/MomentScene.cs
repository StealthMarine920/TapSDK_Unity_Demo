using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TapSDK;
using UnityNative.Toasts.Example;

public class MomentScene : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        TDSCore.EnableMoment();
        
        TDSMoment.SetCallback((code, msg) =>
        {
            Debug.Log("---- moment 回调  code: " + code + " msg: " + msg + "----");
            if (code == 20100)
            {
                UnityNativeToastsHelper.ShowShortText("获取新消息失败");
            } else if (code == 20000) {
                UnityNativeToastsHelper.ShowShortText("获取新消息成功");
            } 
        });
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnGUI()
    {
        GUIStyle style = new GUIStyle(GUI.skin.button);
        style.fontSize = 40;

        GUI.depth = 0;

        if (GUI.Button(new Rect(60, 150, 180, 100), "打开动态", style)) {
            TDSMoment.OpenMoment(Orientation.ORIENTATION_DEFAULT);
        }

        if (GUI.Button(new Rect(60, 300, 180, 100), "动态红点", style)) {

            TDSMoment.GetNoticeData();
        }

        if (GUI.Button(new Rect(60, 450, 180, 100), "返回", style)) {
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(0);
        }
    }
}
