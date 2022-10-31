#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>
#include <limits.h>

//비트 단위 쉬프트 연산자
//1. Left Shift  ( number << n ) : multiply, 2^n
//2. Right Shift ( number >> n ) : divide, 2^n

int main()
{
	// [8 bit integger cases]
	//								  76543210        76543210      76543210
	printf("%hhd\n", 1 << 3);      // 00000001 ->  00000001???    _> 00001000
	printf("%hhd\n", 8 >> 1);      // 00001000 ->     ?00001000   -> 00000100

	printf("%hhd\n", -119 >> 3);   // 10001001 ->     ???10001001 -> 11110001  (-15)
	printf("%hhd\n",  137 >> 3);   // 10001001 ->     ???10001001 -> 00010001   (17)

	printf("%hhd\n", -119 << 4);   // 10001001 -> 10001001????    -> 10010000  (-122)
	printf("%hhd\n",  137 << 4);   // 10001001 -> 10001001????    -> 10010000   (144)


	int a = 1;
	a <<= 3;
	a >>= 2;

	//printf("Unsigned int %u\n", 0xffffffff);
	//printf("Signed int %d\n", 0xffffffff);
	//int_binary(0xffffffff);

	//printf("Right shift by 3\n");
	//int_binary(  (signed)0xffffffff >> 3);
	//int_binary((unsigned)0xffffffff >> 3);

	//printf("\nUnsigned int %u\n", 0x00ffffff);
	//printf("signed int %d\n", 0x00ffffff);

	//printf("Right shift by 3\n");
	//int_binary(  (signed)0x00ffffff >> 3);
	//int_binary((unsigned)0x00ffffff >> 3);

	return 0;
}

void int_binary(const int num)
{
	printf("Decimal %12d == binary ", num);

	const size_t bits = sizeof(num) * CHAR_BIT;

	for (size_t i = 0; i < bits; ++i)
	{
		const int mask = 1 << (bits - 1 - i); //pow()

		if ((num & mask) == mask)
			printf("%d", 1);
		else
			printf("%d", 0);
	}
	printf("\n");
}