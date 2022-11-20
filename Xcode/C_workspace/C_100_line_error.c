#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>

#include "C_100_DifferentFile.h"

//미리 정의된 매크로들, #line, #error

void different_function();

int main()
{
	printf("__FILE__ : %s\n", __FILE__);
	printf("__DATE__ : %s\n", __DATE__);
	printf("__TIME__ : %s\n", __TIME__);
	printf("__LINE__ : %s\n", __LINE__);
	printf("__func__ : %s\n", __func__);

	different_function();

	different_func_in_different_file();
}