
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable: 4996)

int main()
{
	//1, memcpy() : 메모리에서 메모리로 복사하는 함수.
	int a_ss1[10] = { 11, 22, 12, 33,45,32,76,56,45,87 };
	int a_cpy[10];

	/*for (int i = 0; i < 10; i++)
	{
		a_cpy[i] = a_ss1[i];
	}*/

	memcpy(a_cpy, a_ss1, sizeof(a_ss1));
	for (int i = 0; i < 10; i++)
	{
		printf("a_cppy[%d] : %d\n", i, a_cpy[i]);
	}
	//-----------------------------------------1, memcpy()

	//2, memset() : 메모리 전체를 특정한 값으로 셋팅해 주는 함수
	int a_pp[100] = { 0 };
	a_pp[0] = 54;
	a_pp[1] = 12;
	a_pp[2] = 11;
	//    :
	//    :
	//a_pp[100] = { 0 }; //잠재적 에러의 원인이된다.
	//for (int i = 0; i < 100; i++)
	//{
	//	a_pp[i] = 0;
	//}

	memset(a_pp, 0, sizeof(a_pp));
	for (int i = 0; i < 100; i++)
	{
		printf("a_pp[%d] : %d\n", i, a_pp[i]);
	}
	//-----------------------------------------2, memset()
}