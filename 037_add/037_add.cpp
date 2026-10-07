// 두 정수를 더하여 더한 값을 리턴하는 
// 함수 add()를 만들고
// 이를 이용하여 두 수의 합을 구하시오
#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int main()
{
	int x, y;

	printf("두 정수 입력 : ");
	scanf_s("%d %d", &x, &y);

	printf("%d + %d = %d\n", x, y, add(x, y));

	return 0;
}