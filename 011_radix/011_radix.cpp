#include <stdio.h>

int main()
{
	int x = 10;
	int y = 010;	// 8진수
	int z = 0x10;	// 16진수

	printf("%d %d %d\n", x, y, z);
	printf("%d %o %x\n", x, y, z);
	printf("%d %o %x %X\n", x, x, x, x);
	
	// 부동소수점 표현
	float a = 1e39;
	printf("%f\n", a);

	float b = 123.45;
	float c = 1.2345e2;
	
	printf("%f %e\n", b, b);
	printf("%f %e\n", c, c);

	double e = 123.45;
	double f = 1.2345e2;

	printf("%f %e\n", e, e);
	printf("%f %e\n", f, f);

	char code;

	code = 'A';

	printf("%c %d %x\n", code, code, code);
}