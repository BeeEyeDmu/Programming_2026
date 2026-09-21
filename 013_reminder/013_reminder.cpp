#include <stdio.h>
#define SEC 60

int main()
{
	int input, min, sec;

	printf("초를 입력 : ");
	scanf_s("%d", &input);

	min = input / SEC;	// 몫 : 분
	sec = input % SEC;	// 나머지 : 초

	printf("%d분 %d초\n", min, sec);

	int x = 10;
	printf("x = %d\n", ++x);
	printf("x = %d\n", x);

	int y = 10;
	printf("y = %d\n", y++);
	printf("y = %d\n", y);



	return 0;
}