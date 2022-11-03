#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>

//조건에 다라 다르게 컴파일하기

#define TYPE 1
#if TYPE == 1
#include "C_98_function_1.h"
#elif TYPE == 2
#include "C_98_function_2.h"
#else
static void my_function()
{
	printf("Wrong compile option!");
}
#endif

int main()
{
	//TYPE VALUE
	my_function();

	return 0;
}