#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define PI	3.1415926535

int main()
{
	printf("%f\n", pow(10, 3));
	printf("%f\n", sqrt(64));
	printf("%f\n", sin(PI));
	printf("%f\n", pow(2, 10));
	system("dir");
	printf("%d\n", (int)time(NULL));

	return 0;
}