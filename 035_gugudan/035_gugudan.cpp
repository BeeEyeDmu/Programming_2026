#include <stdio.h>

int main()
{
	// 세로로 출력
	for (int i = 2; i <= 9; i++) {  // 단
		for (int j = 1; j <= 9; j++) {  // 1~9 곱하기
			printf("%d x %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	 
	// 가로로 출력
	for (int i = 1; i <= 9; i++) { // 1~9 
		for (int j = 2; j <= 9; j++)	// 단
			printf("%d x %d = %2d  ", j, i, i * j);
		printf("\n");
	}

	return 0;
}