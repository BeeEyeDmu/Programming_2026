#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c;	// 이차방정식의 계수
	double d;	// 판별식

	printf("a b c 계수 입력 : ");
	scanf_s("%lf %lf %lf", &a, &b, &c);

	d = b * b - 4 * a * c;
	if (d > 0)
		printf("근 : %lf %lf\n", (-b + sqrt(d)) / (2 * a),
			(-b - sqrt(d)) / (2 * a));
	else if (d == 0)
		printf("근 : %f\n", -b / (2 * a));
	else
		printf("실근 없음");

	return 0;
}