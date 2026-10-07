#include <stdio.h>

int fact(int n)
{
	int f = 1;

	for (int i = 1; i <= n; i++)
		f *= i;

	return f;
}

int main()
{
	int n;

	printf("n 입력 : ");
	scanf_s("%d", &n);

	printf("%d! = %d\n", n, fact(n));

	for(int i=1; i<=n; i++)
		printf("%d! = %d\n", i, fact(i));

	return 0;
}