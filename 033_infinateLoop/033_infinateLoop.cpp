#include <stdio.h>

int main()
{
	int i = 1; 
	int n;

	while (1) {	// 무한루프
		printf("숫자 입력(끝은 -1) : ");
		scanf_s("%d", &n);
		if (n == -1)
			break;	// switch문이나 반복문을 하나 빠져나간다
		printf("%d %d\n", n, n * n);
	}

	//for (;;) {
	//	printf("%d\n", i++);
	//}

	//while (1) {		
	//	printf("%d\n", i++);
	//}

	return 0;
}