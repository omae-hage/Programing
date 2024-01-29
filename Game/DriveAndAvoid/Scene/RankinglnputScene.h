#pragma once

#include "SceneBase.h"
#include "../Object/RankingData.h"

class RankinglnputScene : public SceneBase
{
private:
	int backgroud_image;  //背景画像
	RankingData* ranking;  //ランキング情報
	int score;             //スコア
	char name[15];         //名前
	int name_num;    //名前入力
	int cursor_x;   //カーソルｘ座標
	int cursor_y;   //カーソルｙ座標

public:
	RankinglnputScene();
	virtual ~RankinglnputScene();

	virtual void Initialize() override;
	virtual eSceneType Update() override;
	virtual void Draw() const override;
	virtual void Finalize() override;

	virtual eSceneType GetNowScene() const override;

private:
	//名前入力処理
	bool InputName();




};

