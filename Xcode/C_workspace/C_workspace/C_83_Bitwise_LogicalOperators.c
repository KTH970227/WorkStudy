#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>

//비트단위 논리연산자
//-AND(&)
//-OR (|)
//-EXCLUSIVE OR(^)
//-Not(~)

int main()
{

	unsigned char a = 6;              //Binary : 00000110
	unsigned char b = 5;              //Binary : 00000101

	printf("AND(&) : %hhu\n", a & b); //Binary : 00000100
	printf("OR (|) : %hhu\n", a | b); //Binary : 00000111
	printf("ExOR(^) : %hhu\n", a ^ b);//Binary : 00000011
	printf("Not(~) : %hhu\n", ~a);    //Binary : 11111001

	return 0;
}