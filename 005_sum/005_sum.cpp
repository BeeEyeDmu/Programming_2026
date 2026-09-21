// 
// 두 수의 합을 계산하는 프로그램

#include <stdio.h>

int main()
{
	int x = 100;
	int y = 200;
	int sum;  // 두수의 합을 더하는 변수

	//x = 100;
	//y = 200;

	sum = x + y - x * y + 5000;
	printf("두 수의 합 : %d\n", sum);

	return 0;
}