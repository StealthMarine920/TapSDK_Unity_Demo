using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MS.NativeDialog;
using UnityEngine.Events;
using UnityNative.Toasts;
using TapSDK;

public class MainScene : MonoBehaviour, LoginCallback
{

    void Start()
    {
        //初始化
        TDSLogin.Init("0RiAlMny7jiz086FaU");

        //注册回调
        TDSLogin.RegisterLoginCallback(this);

    }

    // Update is called once per frame
    void Update()
    {
       
    }

    private static IosUnityNativeToastsAdapter adapter = new IosUnityNativeToastsAdapter();

    public void LoginSuccess(TDSAccessToken accessToken)
    {
        adapter.ShowShortToast("登录成功");
    }

    public void LoginError(TDSAccountError error)
    {
        adapter.ShowShortToast("登录失败");

        if (error.error == "access_denied" || error.error == "forbidden" || error.error == "invalid_grant") {

            adapter.ShowShortToast("Token失败，请重新登录");
        }
    }

    public void LoginCancel()
    {
        Debug.Log("登录取消...");
        adapter.ShowShortToast("取消登录");
    }

    //测试
    void test() {
        NativeDialogManager.Display(new DialogDisplayOptions()
        {
            title = "主标题",
            message = "副标题",
            negativeLabel = "取消",
            onNegative = new UnityAction(cancel),
        });

        //adapter.ShowShortToast("这是一个Toast");
    }

    void cancel() {

    }

    private void OnGUI()
    {
        GUIStyle style = new GUIStyle(GUI.skin.button);
        style.fontSize = 35;

        if (GUI.Button(new Rect(60, 100, 160, 80), "登录", style))
        {
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(1);
        }

        if (GUI.Button(new Rect(60, 220, 160, 80), "动态", style))
        {
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(2);
        }

    }

}
