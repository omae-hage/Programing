#include "ResultScene.h"
#include "../Object/RankingData.h"
#include "../Utility/InputControl.h"
#include"DxLib.h"

ResultScene::ResultScene() : back_ground(NULL), score(0)
{
	for (int i = 0; i < 3; i++)
	{
		enemy_image[i] = NULL;
		enemy_count[i] = NULL;

	}
}

ResultScene::ResultScene()
{

}

//����������
void ResultScene::Initialize()
{
	//�摜�̓ǂݍ���
	back_ground = LoadGraph("Resource/images/back.bmp");
	int result = LoadDivGraph("Resource/imagse/car.bmp", 3, 3, 2, 63, 120, enemy_image);

	//�G���[�`�F�b�N
	if (back_ground == -1)
	{
		throw ("Resource/images/back.bmp������܂���\n");
	}

	if (result == -1)
	{
		throw ("Resource/Images/car.bmp������܂���\n");

	}
	//�Q�[�����ʂ̓ǂݍ���
	ReadResultData();
}

//�X�V����
eSceneType ResultScene::Update()
{
	//B�{�^���Ń����L���O�ɑJ�ڂ���
	if (InputControl::GetButtonDown(XINPUT_BUTTON_B))
	{
		return eSceneType::E_RANKING_INPUT;
	}

	return GetNowScene();
}

//�`�揈��

