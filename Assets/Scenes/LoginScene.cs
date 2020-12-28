using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TapSDK;
using UnityNative.Toasts;

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

    private IosUnityNativeToastsAdapter adapter = new IosUnityNativeToastsAdapter();

    private void OnGUI()
    {
        GUIStyle style = new GUIStyle(GUI.skin.button);
        style.fontSize = 35;

        GUIStyle labelStyle = new GUIStyle(GUI.skin.label);
        labelStyle.fontSize = 20;
        labelStyle.alignment = TextAnchor.MiddleLeft;

        GUI.depth = 0;

        if (GUI.Button(new Rect(60, 88, 160, 80), "登录", style))
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
                    adapter.ShowShortToast("已经登录");
                }
                TDSCommon.BridgeIOS.GetInstance().removeKey("GetCurrentAccessToken");
            });
        }

        if (GUI.Button(new Rect(60, 198, 160, 80), "退出登录", style))
        {
            TDSLogin.GetCurrentAccessToken((accessToken) =>
            {                
                if (accessToken == null)
                {
                    adapter.ShowShortToast("当前没有登录");
                }
                else
                {
                    adapter.ShowShortToast("退出登录");
                    TDSLogin.Logout();
                }
                TDSCommon.BridgeIOS.GetInstance().removeKey("GetCurrentAccessToken");
            });
        }

        if (GUI.Button(new Rect(60, 308, 160, 80), "返回", style))
        {
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(0);
        }
    }
}
