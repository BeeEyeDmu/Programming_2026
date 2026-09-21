#include <stdio.h>

int main()
{
	int score;

	printf("점수 입력 : ");
	scanf_s("%d", &score);

	if (score >= 60) 
	{
		printf("합격입니다.\n");
		printf("장학생입니다.\n");
	}

	return 0;
}