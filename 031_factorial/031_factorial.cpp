#include <stdio.h>

int main()
{
	int fact = 1;	// 팩토리얼은 1로 초기화
	int n;

	printf("정수 입력 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		fact *= i;
		printf("%d! = %d\n", i, fact);
	}	

	return 0;
}