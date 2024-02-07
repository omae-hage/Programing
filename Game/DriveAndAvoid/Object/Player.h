#pragma once

#include "../Utility/Vector2Dh.h"
#include "Barrier.h"
class Player
{private:
	bool is_active;    //�L����Ԃ��H
	int image;    //�摜�f�[�^�[
	Vector2D location;  //�ʒu���W
	Vector2D box_size;  //�����蔻��̑傫��
	float speed;  //�p�x
	float hp;    //����
	float fuel;  //�R��
	int barrier_count;  //�o���A�̖���
	Barrier* barrier;  //�o���A

public:
	Player();
	~Player();

	void Initialize();   //����������
	void Update();   //�X�V����
	void Draw();    //�`�揈��
	void Finalize();  //�C��������

public:
	void SetActive(bool flg);   //�L���t���O�ݒ�
	void DecreaseHp(float value);  //�̗͌�������
	Vector2D GetLocation()const;//�ʒu���W�擾
	Vector2D GetBoxSize()const;  //�����蔻��̑傫���擾
	float GetSpeed() const;   //�����擾����
	float GetFuel() const;   //�R���擾
	float GetFuel() const;  //�̗͎擾
	int GetBarriarCount() const;  //�o���A�̖����擾
	bool IsBarrier() const; //�o���A�L�����H���擾

private:
	void Movement();   //�ړ�����
	void Acceleration();  //��������



};

