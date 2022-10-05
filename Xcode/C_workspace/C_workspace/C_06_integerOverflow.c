#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <limits.h>    //UINT_MAX, INT_MAX, INT_MIN 사용가능
#include <stdlib.h>    //_itoa()

//sizeof() : 연산자, 메모리 사이즈를 알 수 있음.

int main()
{
    unsigned int i = 0;
    
    printf("%ld\n", sizeof(unsigned int));
    printf("%ld\n", sizeof(i));
    
    
    unsigned int ii = 0b1111111111111111; //2진수 입력
    unsigned int u = UINT_MAX;
    
    printf("%d\n", ii);
    printf("%u\n", u);
    
    
    unsigned int u_Max = UINT_MAX;
    unsigned int u_Min = 0;
    signed int i_Max = INT_MAX;
    signed int i_Min = INT_MIN;
    
    printf("max of uint = %u\n", u_Max);
    printf("min of uint = %u\n", u_Min);
    printf("max of int = %d\n", i_Max);
    printf("max of int = %d\n", i_Min);
    
    //오버플로우 발생
    unsigned int u_OFmax = UINT_MAX + 1;
    printf("%u\n", u_OFmax); // OVERFLOW 발생
    
    
    unsigned int u_max = UINT_MAX + 1;  //1111 + 1 = (1)0000
    //unsigned int u_max = 0 - 1;         //0000 - 1 = 1111
    //i to binary representation
    char buffer[33];
    //_itoa(u_max, buffer, 2);
    
    //print decimal and binary
    printf("decimal : %u\n", u_max);
    printf("binary : %s\n", buffer);
    
    return 0;
}
