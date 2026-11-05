#include <stdio.h>

int fact(int n)
{
	printf("fact(%d)\n", n);

	if (n <= 1)
		return 1;
	else
		return n * fact(n - 1);
}

int main()
{
	int n;

	printf("n 입력 : ");
	scanf_s("%d", &n);

	printf("%d! = %d\n", n, fact(n));

	// 1!~n!까지 출력
	/*for(int i=1; i<=n; i++)
		printf("%d! = %d\n", i, fact(i));*/

	return 0;
}