#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//10진수 (Binary Numbers) : 1 2 3 4 5 6 7 8 9 10 ...
//2진수 (Decimal Numbers) : 0 1 10 11 100 101 111 1000 1001 1010 ...
//8진수 (Octal Numbers)   : 0 1 2 3 4 5 6 7 10 11 12 ...
//16진수 (HexaDecimal Numbers) : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10 ...


int main()
{
    unsigned int decimal = 4294967295;
    unsigned int binary = 0b11111111111111111111111111111111;
    unsigned int octal = 037777777777;
    unsigned int hexa = 0xffffffff;
    
    printf("%u\n", decimal);
    printf("%u\n", binary);
    printf("%u\n", octal);
    printf("%u\n", hexa);
    
    //%#일 때 앞에까지 볼 수 있음
    printf("%0o %x %#o %#x %#X\n", decimal, decimal, decimal, decimal, decimal);
    //37777777777 ffffffff 037777777777 0xffffffff 0XFFFFFFFF
    return 0;
}
