#include <stdio.h>

int main()
{
	//float r;
	//float area;
	float r, area;

	printf("반지름 : ");
	scanf_s("%f", &r); 

	area = 3.141592 * r * r;

	printf("area = %f\n", area);

	return 0;
}