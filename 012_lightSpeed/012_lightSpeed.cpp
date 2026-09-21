// 태양에서 오는 빛이 몇분만에 지구에 도착하는지 
// 계산하는 프로그램

#include <stdio.h>

int main()
{
	double ls = 300000;
	double dist = 149600000;

	double time = dist / ls;	// 초
	time = time / 60;			// 분

	printf("%f\n", time);
}