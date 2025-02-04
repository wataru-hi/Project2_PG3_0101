#include <iostream>
using namespace std;

class Enemy {
public:
	void Update();

	void Approach(); // �ڋ�
	void Attack();   // �U��
	void Retreat();  // ���E

	// �֐��|�C���^�e�[�u��
	static void (Enemy::* table[])();

private:
	int index = 0;
};

void Enemy::Approach() {
	cout << "�G���ڋ߁I" << endl;
}

void Enemy::Attack() {
	cout << "�G���U���I" << endl;
}

void Enemy::Retreat() {
	cout << "�G�����E" << endl;
}

void Enemy::Update() {

	// �֐��e�[�u������֐������s
	(this->*table[index])();

	cout << "���̏�ԂɈڍs (0: �͂��A ��: ������)";
	int input;
	cin >> input;

	if (input == 0) {
		index = (index + 1) % 3;
	}
}

// �����o�֐��|�C���^�e�[�u��
void (Enemy::* Enemy::table[])() = {
	&Enemy::Approach, // �C���f�b�N�X0
	&Enemy::Attack,   // �C���f�b�N�X1
	&Enemy::Retreat   // �C���f�b�N�X2
};

int main() {

	Enemy enemy;

	while (1)enemy.Update();

	return 0;
}