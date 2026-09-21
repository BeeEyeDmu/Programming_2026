#include <stdio.h>

int main()
{
	char op;	// 연산자
	int x, y;	// 피연산자
	int r;	// 계산 결과

	printf("수식 입력 : ");
	//scanf_s("%d %c %d", &x, &op, (unsigned)sizeof(op), & y);

	// scanf_s() 함수에서 %c 또는 %s를 사용할 때, size를 표시해야 함
	scanf_s("%d %c %d", &x, &op, (unsigned)sizeof(op), &y);

	switch (op)
	{
	case '+':
		r = x + y;
		break;
	case '-':
		r = x - y;
		break;
	case '*':
		r = x * y;
		break;
	case '/':
		r = x / y;
		break;
	case '%':
		r = x % y;
		break;
	default:
		printf("이상한 연산자입니다.");
		break;
	}

	goto xpos;

ypos:
	if (op == '+')
		r = x + y;
	else if (op == '-')
		r = x - y;
	else if (op == '*')
		r = x * y;
	else if (op == '/')
		r = x / y;
	else if (op == '%')
		r = x % y;
	else
		printf("이상한 연산자입니다.");


xpos:
	printf("%d %c %d = %d\n", x, op, y, r);
	//goto ypos;

	return 0;
}