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
        TDSCore.Init("0RiAlMny7jiz086FaU");

        //注册回调
        TDSLogin.RegisterLoginCallback(this);

        //开启tapDB
        TDSCore.EnableTapDB("gameVersion", "gamenChannel");

    }

    // Update is called once per frame
    void Update()
    {
       
    }

    public void LoginSuccess(TDSAccessToken accessToken)
    {
        UnityNativeToastsHelper.ShowShortText("登录成功");

        TDSLogin.GetCurrentProfile((profile) => {
            string userId = profile.openid;
            TDSTapDB.SetUser(userId);
        });
    }

    public void LoginError(TDSAccountError error)
    {        
        if (error.error == "access_denied" || error.error == "forbidden" || error.error == "invalid_grant")
        {
            reLogin();
        }
        else {
            UnityNativeToastsHelper.ShowShortText("登录失败");
        }
    }

    public void LoginCancel()
    {
        UnityNativeToastsHelper.ShowShortText("取消登录");
    }

    void reLogin() {
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
    }

    void login() {
        string[] permissions = { "public_profile" };
        TDSLogin.StartLogin(permissions);
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
                    string userId = profile.openid;
                    TDSTapDB.SetUser(userId);
                    UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(3);
                }
            });            
        }
    }
}
