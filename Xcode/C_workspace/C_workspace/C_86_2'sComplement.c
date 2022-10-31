#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>
#include <math.h>

//2의 보수 표현법 확인해보기

void print_binary(const char num)
{
	printf("Decimal %3d \t== Binary ", num);

	const size_t bits = sizeof(num) * 8;
	for (size_t i = 0; i < bits; ++i)
	{
		const unsigned char mask =
			(char)pow((double)2, (double)(bits - 1 - i));

		if ((num & mask) == mask)
			printf("%d", 1);
		else
			printf("%d", 0);
	}
	printf("\n");
}

int main()
{
	print_binary(127);      //01111111
	print_binary(-127);     //10000001
	print_binary(~127 + 1); //10000001

	print_binary(12);		//00001100
	print_binary(-12);      //11110100
	print_binary(~12 + 1);  //11110100

	print_binary(7);        //00000111
	print_binary(-7);       //11111001
	print_binary(~7 + 1);   //11111001

	return 0;
}