#include <stdio.h>
#define STDS	3

int main()
{
	int score[STDS];	// 배열 생성

	// 성적입력
	for (int i = 0; i < STDS; i++) {
		printf("성적 입력 : ");
		scanf_s("%d", &score[i]);
	}

	// 성적 출력
	for (int i = 0; i < STDS; i++)
		printf("%d ", score[i]);
	printf("\n");

	// 합계 계산
	int sum = 0;
	for (int i = 0; i < STDS; i++)
		sum += score[i];

	printf("합계 = %d, 평균 = %.1f\n", sum, (float)sum / STDS);

	return 0;
}