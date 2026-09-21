#include <stdio.h>

int main()
{
	printf("1 > 2 = %d\n", 1 > 2);
	printf("10 > 2 = %d\n", 10 > 2);

	int x = 3;

	//if (2 < x < 5)
	if( 2 < x && x < 5)
		printf("맞습니다\n");

	return 0;
}