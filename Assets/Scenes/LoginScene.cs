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
            TDSLogin.GetCurrentProfile((profile) => {
                if (profile == null)
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
            TDSLogin.GetCurrentProfile((profile) => {
                if (profile == null)
                {
                    UnityNativeToastsHelper.ShowShortText("当前未登录");
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
            TDSLogin.GetCurrentProfile((profile) => {
                if (profile == null)
                {
                    UnityNativeToastsHelper.ShowShortText("当前未登录");
                }
                else
                {
                    string str = profile.ToJSON();
                    UnityNativeToastsHelper.ShowShortText(str);
                }
            });
        }

        if (GUI.Button(new Rect(60, 600, 260, 100), "远程用户信息", style))
        {

            TDSLogin.FetchProfileForCurrentAccessToken((profile) => {
                if (profile == null)
                {
                    UnityNativeToastsHelper.ShowShortText("当前未登录");
                }
                else
                {
                    string str = profile.ToJSON();
                    UnityNativeToastsHelper.ShowShortText(str);
                }
            }, (error) => {
                UnityNativeToastsHelper.ShowShortText(error);
            }) ;
        }

        if (GUI.Button(new Rect(60, 750, 180, 100), "返回", style))
        {
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(0);
        }
    }
}
