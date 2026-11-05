#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned)time(NULL));	// random seed(랜덤 씨앗)
	for (int i = 0; i < 6; i++)
		printf("%d ", rand() % 45 + 1);

	return 0;
}
