#include <stdio.h>

int main()
{
	char c;

	printf("문자 하나 입력 : ");
	//c = getchar();
	scanf_s("%c", &c, (unsigned)sizeof(c));

	if (c >= '0' && c <= '9')  // if(c >= 48 && c <= 57)
		printf("%c는 숫자\n", c);
	else if(c >= 'A' && c <= 'Z')
		printf("%c는 대문자\n", c);
	else if (c >= 'a' && c <= 'z')
		printf("%c는 소문자\n", c);
	else 
		printf("%c는 그 외의 문자\n", c);

	return 0;
}