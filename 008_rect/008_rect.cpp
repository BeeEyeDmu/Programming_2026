#include <stdio.h>

int main()
{
	int w, h, area, peri;

	printf("너비와 높이 입력 : ");
	scanf_s("%d %d", &w, &h);

	area = w * h;
	peri = 2 * (w + h);

	printf("면적 = %d\n", area);
	printf("둘레 = %d\n", peri);
}