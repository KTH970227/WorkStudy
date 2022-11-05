#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>

//조건에 다라 다르게 컴파일하기
//#undef _WIN64

void say_hello()
{
#ifdef _WIN64      //#if defined (_WIN64)
	printf("Hello, WIN64");
#elif _WIN32
	printf("Hello, WIN32");
#elif __linux__
	printf("Hello, linux");
#endif
}

int main()
{
	say_hello();

	return 0;
}