#include <stdio.h>

int Recursive(int count, int JikyuA, int gokeiA, int JikyuB, int gokeiB) {

	// 何回再起したか
	count++;

	// それぞれ給料を合計に足し込む
	gokeiA += JikyuA;
	gokeiB += JikyuB;

	// 可変給の合計が固定給の合計を超えたら終了
	if (gokeiA >= gokeiB) {

		printf("%d時間目 || 変動給%d円 総支給%d円 || 固定給%d円 総支給%d円\n", count, JikyuA, gokeiA, JikyuB, gokeiB);

		return(1);

	}
	else {

		printf("%d時間目 || 変動給%d円 総支給%d円 || 固定給%d円 総支給%d円\n", count, JikyuA, gokeiA, JikyuB, gokeiB);

		// 変動給更新
		JikyuA = JikyuA * 2 - 50;

		// 再帰処理
		return (Recursive(count, JikyuA, gokeiA, JikyuB, gokeiB));
	}
}

int main() {

	// 何回再起したかを数える
	int count = 0;

	// 変動給
	int JikyuA = 100;

	// 総支給
	int gokeiA = 0;

	// 固定給
	int JikyuB = 1072;

	// 総支給
	int gokeiB = 0;

	// 再帰呼び出し
	Recursive(count, JikyuA, gokeiA, JikyuB, gokeiB);

	return 0;
}