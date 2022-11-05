#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>

//조건에 다라 다르게 컴파일하기
//#define REPORT
//속성 - C/C++ - Preprocessor - Preprocessor Definitions - "REPORT;" 추가할 수 있음.

int sum(int i, int j)
{
	int s = 0;
	for (int k = i; k <= j; ++k)
	{
		s += k;

#ifdef REPORT
		printf("%d %d\n", s, k);
#endif
	}

	return s;
}

int main()
{
	printf("\n%d \n", sum(1, 10));

	return 0;
}