#include <stdio.h>

int Recursive(int count, int JikyuA, int gokeiA, int JikyuB, int gokeiB) {

	// ����ċN������
	count++;

	// ���ꂼ�ꋋ�������v�ɑ�������
	gokeiA += JikyuA;
	gokeiB += JikyuB;

	// �ϋ��̍��v���Œ苋�̍��v�𒴂�����I��
	if (gokeiA >= gokeiB) {

		printf("%d���Ԗ� || �ϓ���%d�~ ���x��%d�~ || �Œ苋%d�~ ���x��%d�~\n", count, JikyuA, gokeiA, JikyuB, gokeiB);

		return(1);

	}
	else {

		printf("%d���Ԗ� || �ϓ���%d�~ ���x��%d�~ || �Œ苋%d�~ ���x��%d�~\n", count, JikyuA, gokeiA, JikyuB, gokeiB);

		// �ϓ����X�V
		JikyuA = JikyuA * 2 - 50;

		// �ċA����
		return (Recursive(count, JikyuA, gokeiA, JikyuB, gokeiB));
	}
}

int main() {

	// ����ċN�������𐔂���
	int count = 0;

	// �ϓ���
	int JikyuA = 100;

	// ���x��
	int gokeiA = 0;

	// �Œ苋
	int JikyuB = 1072;

	// ���x��
	int gokeiB = 0;

	// �ċA�Ăяo��
	Recursive(count, JikyuA, gokeiA, JikyuB, gokeiB);

	return 0;
}