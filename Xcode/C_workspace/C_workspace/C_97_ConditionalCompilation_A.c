#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>

#include "C_97_Header_B.h" //#ifndef HEADER_B ~ #endif
#include "C_97_Header_A.h" //#ifndef HEADER_A ~ #endif

//조건에 다라 다르게 컴파일하기
// #define, #undef, #if, #ifdef, #ifndef, #else, #elif, #endif

#define LIMIT 400
//#undef LIMIT
#undef NON_DEFINDED


int main()
{
	printf("%d\n", LIMIT);

	test_function_A();
	test_function_B();

	return 0;
}