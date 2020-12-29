using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TapSDK;
using UnityNative.Toasts.Example;

public class LoginScene : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {

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

        if (GUI.Button(new Rect(60, 150, 180, 100), "登录", style))
        {
            TDSLogin.GetCurrentAccessToken((accessToken) =>
            {
                if (accessToken == null)
                {
                    string[] permissions = { "public_profile" };
                    TDSLogin.StartLogin(permissions);
                }
                else
                {
                    UnityNativeToastsHelper.ShowShortText("已经登录");
                }
            });
        }

        if (GUI.Button(new Rect(60, 300, 180, 100), "退出登录", style))
        {
            TDSLogin.GetCurrentAccessToken((accessToken) =>
            {                
                if (accessToken == null)
                {
                    UnityNativeToastsHelper.ShowShortText("当前没有登录");
                }
                else
                {
                    UnityNativeToastsHelper.ShowShortText("退出登录");
                    TDSLogin.Logout();
                }
            });
        }

        if (GUI.Button(new Rect(60, 450, 180, 100), "用户信息", style))
        {
            TDSLogin.GetCurrentProfile((accessToken) => {
                if (accessToken == null)
                {
                    UnityNativeToastsHelper.ShowShortText("当前没有登录");
                }
                else {
                    string str = accessToken.ToJSON();
                    UnityNativeToastsHelper.ShowShortText(str);
                }
            });
        }

        if (GUI.Button(new Rect(60, 600, 180, 100), "返回", style))
        {
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(0);
        }
    }
}
