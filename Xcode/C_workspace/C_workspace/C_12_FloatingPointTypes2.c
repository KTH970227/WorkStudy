#define _CRT_SECRUE_NO_WARININGS

#include <stdio.h>
#include <math.h> //asinf

//부동 소수점 자료형의 한계

int main()
{
    //round-off errors (ex1)
    //너무 큰 수와 작은 수 더할 시 작은 수가 사라지는 상황
    float a, b;
    a = 1.0E20f + 1.0f;
    b = a - 1.0E20f;
    printf("%f\n", b); //0.000000
    
    
    //round-off errors (ex2)
    //결과가 1이 아닌 0.999999가 나오는 상황
    float aa = 0.0f;
    
    for(int  i = 0; i < 100; i++)
    {
        aa = aa + 0.01f;
    }
    printf("%f\n", aa); // 0.999999
    
    
    //overflow
    float max = 3.402823466e+38F;
    printf("%f\n", max); //340282346638528859811704183484516925440.000000
    max = max * 100.0f;
    printf("%f\n", max); //inf
    
    
    //underflow
    float f = 1.401298464e-45F;
    printf("%e\n", f);
    f = f / 2.0f;     //subnormal : 정밀도 표현할 수 없는 숫자를 없애버림
    printf("%e\n", f);
    
    
    float ff = 104.0f;
    printf("%f\n", ff);
    f = f / 0.0f;
    printf("%f\n", ff);
    
    
    float fff = asinf(1.0f);
    printf("%f\n", fff); //1.570796
    
    fff = asinf(2.0f);
    printf("%f\n", fff); //2.0fd이 올 수 없지만 강행 시 결과 : nan
    
    return 0;
}
