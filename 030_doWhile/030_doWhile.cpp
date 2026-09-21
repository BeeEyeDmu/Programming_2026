// 사용자가 0을 입력할 때까지 숫자 더하기
#include <stdio.h>

int main()
{
	int sum = 0;
	int n;

	do {
		printf("정수 입력 : ");
		scanf_s("%d", &n);
		sum += n;
	} while (n != 0);

	printf("sum = %d\n", sum);

	return 0;
}