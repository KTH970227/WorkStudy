#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>
#include <math.h> //pow()
#include <string.h> //strlen()
#include <stdlib.h> //exit()

//이진수를 십진수로 바꾸기 연습문제

unsigned char to_decimal(const char bi[]);

int main()
{
	printf("Binary (string) to Decimal conversion\n");

	printf("%d\n", to_decimal("00000110"));//6
	printf("%d\n", to_decimal("00010110"));//22

	printf("%d\n", to_decimal("10010100"));//148

	return 0;
}

unsigned char to_decimal(const char bi[])
{
	const size_t bits = strlen(bi);
	unsigned char sum = 0;
	for (size_t i = 0; i < bits; ++i)
	{
		if (bi[i] == '1')
			sum += (int)pow(2, bits - 1 - i);
		else if(bi[i] != '0')
		{
			printf("Wrong character : %c", bi[i]);
			exit(EXIT_FAILURE);
		}
	}
	printf("Binary %s == Decimal %d\n", bi, sum);
	return sum;
}