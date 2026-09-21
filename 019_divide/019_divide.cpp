#include <stdio.h>

int main()
{
	int a, b;

	printf("두 정수 : ");
	scanf_s("%d %d", &a, &b);

	if (b == 0)
	{
		printf("0으로 나눌 수 없습니다.\n");
	}
	else
	{
		printf("%d / %d = %d\n", a, b, a / b);
	}

	return 0;
}