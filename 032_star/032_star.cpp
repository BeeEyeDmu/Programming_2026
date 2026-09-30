#include <stdio.h>

int main()
{
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 10; i++)
			printf("*");
		printf("\n");
	}

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 2*i-1; j++)
			printf("*");
		printf("\n");
	}

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5 - i; j++)
			printf(" ");	// 빈칸
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5 - i; j++)
			printf(" ");	// 빈칸
		for (int j = 1; j <= 2*i-1; j++)
			printf("*");
		printf("\n");
	}

	for (int i = 5; i >= 1; i--) {
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	for (int i = 5; i >= 1; i--) {
		for (int j = 1; j <= 5 - i; j++)
			printf(" ");	// 빈칸
		for (int j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}