#include <stdio.h>

int main()
{
	// 문자형
	printf("char 형의 크기 = %d\n", (int)sizeof(char));

	// 정수형
	printf("int 형의 크기 = %d\n", (int)sizeof(int));
	printf("short 형의 크기 = %d\n", sizeof(short));
	printf("long 형의 크기 = %d\n", sizeof(long));
	printf("long long형의 크기 = %d\n", sizeof(long long));

	// 부동소수점(실수형)
	printf("float 형의 크기 = %d\n", sizeof(float));
	printf("double 형의 크기 = %d\n", sizeof(double));
}