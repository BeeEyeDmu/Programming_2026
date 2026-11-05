// static 변수 : 값을 유지한다는 뜻
#include <stdio.h>

void sub()
{
	static int cnt = 0;

	cnt++;
	printf("cnt = %d\n", cnt);
}

int main()
{
	sub();
	sub();
	sub();

	return 0;
}