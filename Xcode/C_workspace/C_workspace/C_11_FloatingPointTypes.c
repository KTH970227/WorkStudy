#define _CRT_SECRUE_NO_WARININGS

#include <stdio.h>

//부동 소수점 자료형(Floating Point Types)
//123.45 = 12345 x 10(-2) = 1.2345 x 10(+2)

int main()
{
    printf("%u\n", sizeof(float));      //4
    printf("%u\n", sizeof(double));     //4
    printf("%u\n", sizeof(long double));//8
    
    float f = 123.456f;
    double d = 123.456;
    
    float f2 = 123.456f; //f없을 시 오류
    double d2 = 123.456f;
    
    int i = 3;
    float f3 = 3.f;  //3.0f
    double d3 = 3.;  //3.0
    
    float f4 = 1.234e10f;
    
    float f5 = 0x1.1p1;
    double d5 = 1.0625e0;
    
    printf("%f %F %e %E\n", f, f, f, f);
    printf("%f %F %e %E\n", d, d, d, d);
    printf("%a %A\n", f5, f5);
    printf("%a %A\n", d5, d5);
    
    return 0;
}
