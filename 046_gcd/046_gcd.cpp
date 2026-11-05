#include <stdio.h>

// 유클리드 호제법
int gcd(int x, int y)
{
	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
}

int main()
{
	int x, y;

	printf("두 수 입력 : ");
	scanf_s("%d %d", &x, &y);

	printf("최대공약수 = %d\n", gcd(x, y));

	return 0;
}