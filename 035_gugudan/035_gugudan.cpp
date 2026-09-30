#include <stdio.h>

int main()
{
	// 세로로 출력
	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	 
	// 가로로 출력

	return 0;
}