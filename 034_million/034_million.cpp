#include <stdio.h>

int main()
{
	int money = 1000000;

	for (int i = 1; ; i++) {
		money += money * 0.3;
		if (money >= 10000000) {
			printf("%d년 : %d원\n", i, money);
			break;
		}
	}

	return 0;
}