#include <stdio.h>
#include <stdlib.h>
#include <functional>
#include <Windows.h>
#include <time.h>

void setTimeout(int second) {

	//���[���o�b�N�֐��̌Ăяo��
	Sleep(second * 1000);

}

auto Funciton = [=](int answer) {
	//�����_������
	int diceNumber = rand();

	//�������킹
	if (answer <= 1) {
		if (answer == diceNumber % 2) {
			return printf("������%d,����\n", diceNumber % 6);
		}
		else if (answer != diceNumber % 2) {
			return printf("������%d,�s����\n", diceNumber % 6);
		}
	}
	else {
		return printf("�w��̐����ȊO�����͂���܂���");
	}


	return printf("end");
	};

int main(int argc, const char* argv[]) {

	unsigned int randTime = (unsigned int)time(nullptr);
	srand(randTime);

	int answer;

	//���͏���
	printf("��(1)����(0)��\n");
	scanf_s("%d", &answer);

	printf("start\n");

	setTimeout(5);

	Funciton(answer);

	return 0;
}