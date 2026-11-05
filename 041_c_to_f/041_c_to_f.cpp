// 섭씨를 화씨로 바꾸는 프로그램
// F = 9.0/5.0*C + 32

#include <stdio.h>

float c_to_f(float c);	// 함수의 원형, prototype

int main()
{
	float cel, fer;	// 섭씨, 화씨

	printf("input Celcius : ");
	scanf_s("%f", &cel);

	printf("화씨 = %.1f\n", c_to_f(cel));

	return 0;
}

float c_to_f(float c)
{
	return 9.0 / 5.0 * c + 32;
}

