// 정수을 입력받아 1부터 그 수까지의 합 구하기
#include <stdio.h>

int main()
{
	int n;

	printf("정수 입력 : ");
	scanf_s("%d", &n);

	int sum = 0;	// 초기화 반드시 할 것
	
	for (int i = 1; i <= n; i++)
		sum += i;

	printf("sum = %d\n", sum);

	// while 문 사용
	int evenSum = 0;	// 짝수의 합
	int oddSum = 0;		// 홀수의 합
	int i = 1;

	while (i <= n) {
		if (i % 2 == 1)
			oddSum += i;
		else
			evenSum += i;
		i++;
	}
	printf("홀수의 합 = %d\n", oddSum);
	printf("짝수의 합 = %d\n", evenSum);

	return 0;
}