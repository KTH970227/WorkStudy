#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>
#include <stdlib.h> //srand()
#include <time.h>   //time()
#include "C_49_Rand.h"

//난수 생성기 모듈 만들기 예제

int main()
{
	//모듈 나눠서 기능 구현하기
	srand((unsigned int)time(0));

	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n", rand() % 6 + 1);
	}


	//Random();
	srand(1); //random seed

	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n", rand());
	}


	//알고리즘 예제
	//unsigned int next = 1;
	//unsigned int next = (unsigned int)time(0)

	//for (int i = 0; i < 10; ++i)
	//{
	//	next = next * 1103515245 + 1234;
	//	next = (unsigned int)(next / 65536) % 32768;
	//	printf("%d\n", (int)next);
	//}

	return 0;
}