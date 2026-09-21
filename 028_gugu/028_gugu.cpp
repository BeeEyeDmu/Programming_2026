#include <stdio.h>

int main()
{
	int dan;

	printf("단 입력 : ");
	scanf_s("%d", &dan);

	for (int i = 1; i <= 9; i++)
		printf("%d x %d = %d\n", dan, i, dan * i);

	// while
	int i = 1;

	while (i <= 9) {
		printf("%d x %d = %d\n", dan, i, dan * i);
		i++;
	}

	// 제곱 출력
	for (int i = 1; i <= 10; i++)
		printf("%2d %3d\n", i, i * i);

	int n = 1;
	
	while (n <= 10) {
		printf("%2d %3d\n", n, n * n);
		n++;
	}

	return 0;
}