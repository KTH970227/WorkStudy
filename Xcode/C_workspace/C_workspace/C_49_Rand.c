#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>
#include <stdlib.h> //srand()
#include <time.h>   //time()
#include "C_49_Rand.h"

//���� ������ ��� ����� ����

int main()
{
	//��� ������ ��� �����ϱ�
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


	//�˰��� ����
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