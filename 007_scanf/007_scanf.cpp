#include <stdio.h>

int main()
{
	int x;
	float y;
	double z;

	printf("정수 하나와 실수 2개를 입력 : ");

	scanf_s("%d %f %lf", &x, &y, &z);
	printf("%d %f %lf\n", x, y, z);
}