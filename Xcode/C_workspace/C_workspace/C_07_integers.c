#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

//1Byte : char, unsigned char, signed char
//2Byte : short, unsigned short
//4Byte : int, unsigned int, long, unsigned long, float
//8Byte : long long, unsigned long

int main()
{
    char c = 65;
    short s = 200;
    unsigned int ui = 30000000;
    long l = 65537L;
    long long ll = 12345678908642LL;
    
    printf("char = %hhd, %d, %c\n", c, c, c);
    printf("short = %hhd, %hd, %d\n", s, s, s);
    printf("unsigned int = %u, %d\n", ui, ui);
    printf("long = %ld, %hd\n", l, l);
    printf("long long = %lld, %ld\n", ll, ll);
    
    return 0;
}
