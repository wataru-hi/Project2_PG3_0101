#include <stdio.h>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"

int main(void) {

	IShape* shape[2];

	shape[0] = new Circle;
	shape[1] = new Rectangle;

	printf("�~�̔��a:4\n�Z�`�̒��:2\n�Z�`�̍���:3\n");

	for (int i = 0; i < 2; i++)
		shape[i]->Size();


	printf("\n");

	for (int i = 0; i < 2; i++)
		shape[i]->Draw();

	return 0;
}