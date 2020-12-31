using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MS.NativeDialog;
using UnityEngine.Events;
using UnityNative.Toasts.Example;
using TapSDK;

public class MainScene : MonoBehaviour, LoginCallback
{
    void Start()
    {
        //初始化
        TDSCore.Init("");

        //注册回调
        TDSLogin.RegisterLoginCallback(this);

        //开启tapDB
        TDSCore.EnableTapDB("gameVersion", "gamenChannel");

        setDBUser();
    }

    // Update is called once per frame
    void Update()
    {
       
    }

    private bool isFlag = false;

    public void LoginSuccess(TDSAccessToken accessToken)
    {
        isFlag = false;
        UnityNativeToastsHelper.ShowShortText("登录成功");
        setDBUser();
    }

    public void LoginError(TDSAccountError error)
    {
        Debug.Log("登录失败的error信息:  " + error.error);
        if (error.error == "access_denied" || error.error == "forbidden" || error.error == "invalid_grant")
        {
            if (!isFlag) {
                reLogin();
            }            
        }
        else {
            isFlag = false;
            UnityNativeToastsHelper.ShowShortText("登录失败: "+error.error);
        }
    }

    public void LoginCancel()
    {
        isFlag = false;
        UnityNativeToastsHelper.ShowShortText("取消登录");
    }

    void reLogin() {
        isFlag = true;
        NativeDialogManager.Display(new DialogDisplayOptions()
        {
            title = "提示",
            message = "当前登录信息失效",
            negativeLabel = "取消",
            onNegative = new UnityAction(cancel),

            positiveLabel = "登录",
            onPositive = new UnityAction(login)
        });
    }

    void cancel() {
        Debug.Log("取消再次登录");
        isFlag = false;
    }

    void login() {
        string[] permissions = { "public_profile" };
        TDSLogin.StartLogin(permissions);
    }

    void setDBUser(){
        TDSLogin.GetCurrentProfile((profile) => {
            if (profile != null) {
                string userId = profile.openid + "-user"; 
                TDSTapDB.SetUser(userId);
            }
        });
    }

    private void OnGUI()
    {
        GUIStyle style = new GUIStyle(GUI.skin.button);
        style.fontSize = 40;

        if (GUI.Button(new Rect(60, 150, 180, 100), "登录", style))
        {
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(1);
        }

        if (GUI.Button(new Rect(60, 300, 180, 100), "动态", style))
        {
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(2);
        }

        if (GUI.Button(new Rect(60, 450, 180, 100), "TapDB", style))
        {
            TDSLogin.GetCurrentProfile((profile) => {
                if (profile == null)
                {
                    UnityNativeToastsHelper.ShowShortText("当前未登录");
                }
                else {
                    UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(3);
                }
            });            
        }
    }
}
