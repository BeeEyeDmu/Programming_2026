#include <stdio.h>

int main()
{
	int x;

	printf("정수 입력 : ");
	scanf_s("%d", &x);

	if (x % 2 == 1)
		printf("홀수\n");
	else
		printf("짝수\n");

	return 0;
}