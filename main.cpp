#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

// �R�[���o�b�N�֐��̃v���g�^�C�v�錾
typedef void (*Callback)(int result);

// �T�C�R���̏o�ڂ����肷��֐�
int roll_dice() {
	return rand() % 6 + 1;
}

// ������s���R�[���o�b�N�֐�
void judge_result(int result) {

	int input;

	printf("�T�C�R���̏o�ڂ��(1)������(2)������:");
	scanf_s("%d", &input);

	printf("���蒆...\n");

	Sleep(3000);

	if ((result % 2 == 1 && input == 1) || (result % 2 == 0 && input == 2)) {
		printf("����\n");
	}
	else {
		printf("�s����\n");
	}

	printf("�T�C�R���̖ڂ�%d\n", result);
}

// ���C���֐�
int main() {

	srand((int)time(NULL));

	int dice_result = roll_dice();

	Callback callback = judge_result;

	callback(dice_result);

	return 0;
}