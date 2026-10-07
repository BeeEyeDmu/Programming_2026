#include <stdio.h>

int fact(int n)
{
	int f = 1;

	for (int i = 1; i <= n; i++)
		f *= i;

	return f;
}

int combination(int n, int r) 
{
	return fact(n) / (fact(n - r) * fact(r));
}

int main()
{
	int n, r;

	printf("n, r 입력 : ");
	scanf_s("%d %d", &n, &r);

	printf("%dC%d = %d\n", n, r, combination(n, r));

	return 0;
}