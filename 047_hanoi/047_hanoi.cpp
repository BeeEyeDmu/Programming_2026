#include <stdio.h>

void hanoi(int n, char from, char tmp, char to)
{
	if (n == 1)
		printf("%c -> %c\n", from, to);
	else
	{
		hanoi(n - 1, from, to, tmp);
		printf("%c -> %c\n", from, to);
		hanoi(n - 1, tmp, from, to);
	}
}

int main()
{
	int n;

	printf("n입력 : ");
	scanf_s("%d", &n);

	hanoi(n, 'a', 'b', 'c');
}