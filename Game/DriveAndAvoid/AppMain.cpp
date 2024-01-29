/***********************************************
*車避けゲームを作ってみよう！
*********************************************/

#include "DxLib.h"
#include "Scene/sceneManager.h"

//メイン関数(プログラムはここから始まります)
int WINAPI WinMain(_In_HINSTANCE hInstance, _In_opt_HINSTANCE hprevInstance, _In_LPSTR lpCmdLine, _In_int nCmdShow)
{
	//例外処理(異常が発生したら、catch文に飛びます)
	try
	{
		//シーンマネージャー昨日の生成
		SceneManager manager;

		//シーンマネージャー昨日の初期化処理
		manager.Initialize();

		//シーンマネージャー昨日の更新処理
		manager.Update();

		//シーンマネージャー昨日の終了字処理
		manager.Finalize();

	}
	catch (const char* err_log)
	{
		//エラー発生内容の出力
		OutputDebugString(err_log);

		//エラー終了を通知	
		return -1;
	}
	//正常終了を通知
	return 0;
}   
