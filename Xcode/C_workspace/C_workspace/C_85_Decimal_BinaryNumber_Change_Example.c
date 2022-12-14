#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>
#include <math.h> //pow()
#include <string.h> //strlen()
#include <stdlib.h> //exit()
#include <stdbool.h>

//&를 이용하는 십진수->이진수로 바꾸는 연습문제

unsigned char to_decimal(const char bi[]);
void print_binary(const unsigned char num);

int main()
{
	unsigned char i = to_decimal("01000110");
	unsigned char mask = to_decimal("00000101");

	print_binary(i);
	print_binary(mask);
	print_binary(i & mask);
}

unsigned char to_decimal(const char bi[])
{
	const size_t bits = strlen(bi);
	unsigned char sum = 0;

	for (size_t i = 0; i < bits; ++i)
	{
		if (bi[i] == '1')
			sum += (int)pow(2, bits - 1 - i);
		else if (bi[i] != '0') {
			printf("Wrong characters %d\n", bi[i]);
			exit(EXIT_FAILURE);
		}
	}
	printf("Binary = %d, Decimal = %d\n", bi, sum);

	return sum;
}

void print_binary(const unsigned char num)
{
	printf("Decimal %3d == Binary ", num);

	const size_t bits = sizeof(num) * 8;
	for (size_t i = 0; i < bits; ++i)
	{
		const unsigned char mask =
			(unsigned char)pow((double)2, (double)(bits - 1 - i));

		if ((num & mask) == mask)
			printf("%d", 1);
		else
			printf("%d", 0);
	}
	printf("\n");
}