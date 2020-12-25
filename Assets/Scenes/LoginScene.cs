using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TapSDK;

public class LoginScene : MonoBehaviour, LoginCallback
{
    // Start is called before the first frame update
    void Start()
    {
        msg = "登录页面";
        //初始化
        TDSLogin.Init("FwFdCIr6u71WQDQwQN");

        //注册回调
        TDSLogin.RegisterLoginCallback(this);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public static string msg;

    public void LoginSuccess(TDSAccessToken accessToken)
    {
        msg = "登录成功";
    }

    public void LoginError(TDSAccountError error)
    {
        msg = error.ToJSON();
    }

    public void LoginCancel()
    {
        msg = "取消登录";
       
    }

    private void OnGUI()
    {
        GUIStyle style = new GUIStyle(GUI.skin.button);
        style.fontSize = 35;

        GUIStyle labelStyle = new GUIStyle(GUI.skin.label);
        labelStyle.fontSize = 20;
        labelStyle.alignment = TextAnchor.MiddleLeft;

        GUI.depth = 0;

        if (GUI.Button(new Rect(60, 88, 160, 80), "登录", style)) {

            string[] permissions = { "public_profile" };
            TDSLogin.StartLogin(permissions);
        }

        if (GUI.Button(new Rect(60, 198, 160, 80), "退出登录", style)) {
            TDSLogin.Logout();
            msg = "退出登录";
        }

        if (GUI.Button(new Rect(60, 308, 160, 80), "返回", style)) {
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(0);
        }

        GUI.Label(new Rect(60, 400, 300, 300), msg, labelStyle);

    }
}
