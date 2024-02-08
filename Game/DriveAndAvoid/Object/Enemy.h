#pragma once
#include "../Utility/Vector2Dh.h"


class Enemy
{
private:
	int type;   //�^�C�v
	int image;   //�摜
	float speed;  //����
	Vector2D location;  //�ʒu���
	Vector2D box_size;  //�����蔻��̑傫��

public:
	Enemy(int type, int handle);
	~Enemy();

	void Initialize();  //����������
	void Update(float speed);  //�X�V����
	void Draw() const;
	void Finalize();  //�C��������

	int GetType() const;   //�^�C�v
	Vector2D GetLocation() const;  //�ʒu���̎擾
	Vector2D GetBoxSize() const;  //�����蔻��̑傫�����擾
};

