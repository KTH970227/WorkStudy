#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>

//���ǿ� �ٶ� �ٸ��� �������ϱ�
//#define REPORT
//�Ӽ� - C/C++ - Preprocessor - Preprocessor Definitions - "REPORT;" �߰��� �� ����.

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