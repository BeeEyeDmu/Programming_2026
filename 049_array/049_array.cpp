// 049_array.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20

int main()
{
	int a[SIZE] = { 0 };

	srand((unsigned)time(NULL));	// 랜덤 시드(seed) 설정

	for (int i = 0; i < SIZE; i++)
		a[i] = rand();

	for (int i = 0; i < SIZE; i++)
		printf("a[%d] = %d\n", i, a[i]);

	return 0;
}