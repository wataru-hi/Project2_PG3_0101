#include <stdio.h>
#include <stdlib.h>
#include <functional>
#include <Windows.h>
#include <time.h>

void setTimeout(int second) {

	//ロールバック関数の呼び出し
	Sleep(second * 1000);

}

auto Funciton = [=](int answer) {
	//ランダム生成
	int diceNumber = rand();

	//答え合わせ
	if (answer <= 1) {
		if (answer == diceNumber % 2) {
			return printf("答えは%d,正解\n", diceNumber % 6);
		}
		else if (answer != diceNumber % 2) {
			return printf("答えは%d,不正解\n", diceNumber % 6);
		}
	}
	else {
		return printf("指定の数字以外が入力されました");
	}


	return printf("end");
	};

int main(int argc, const char* argv[]) {

	unsigned int randTime = (unsigned int)time(nullptr);
	srand(randTime);

	int answer;

	//入力処理
	printf("半(1)か丁(0)か\n");
	scanf_s("%d", &answer);

	printf("start\n");

	setTimeout(5);

	Funciton(answer);

	return 0;
}