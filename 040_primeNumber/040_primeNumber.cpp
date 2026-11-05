#include <stdio.h>

// 소수이면 1, 소수가 아니면 0을 리턴
int isPrime(int n)
{
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return 0;	// 소수 아님

	return 1;	// 소수
}

int main()
{
	int n;

	printf("n 입력 : ");
	scanf_s("%d", &n);

	for (int i = 2; i <= n; i++) {
		if (isPrime(i) == 1)
			printf("%d = 소수임!\n", i);
		else
			printf("%d = 소수 아님!\n", i);
	}

	// 2~n 사이의 소수만 출력
	for (int i = 2; i <= n; i++)
		if (isPrime(i) == 1)
			printf("%d ", i);
	printf("\n");

	return 0;
}