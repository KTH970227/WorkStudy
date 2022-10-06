#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <complex.h>

//복소수 자료형(Complex Types)

int main()
{
    double _Complex z = 1 + 2*I;
    
    z = 1 / z;
    
    //creal() : 실수부 가져올 때, cimag() : 허수부 가져올 때
    printf("1 / (1.0 + 2.0i) = %.1f%+.1fi\n", creal(z), cimag(z));
    
    return 0;
}
