#include <stdio.h>

int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	// 호출
	printf("max = %d\n", max(10, 20));

	return 0;
}