#define _CRT_SECRUE_NO_WARININGS

#include <stdio.h>
#include <limits.h>
#include <float.h>

//Printf() 함수의 변환 지정자들(Conversion Specifiers)

int main()
{
    double d = 3.1415926535897932384626433832795028841971693993751058209749445f;
    
    printf("%c\n", 'A');
    printf("%s", "I love you\n");
    printf("Even if there's a small chance, \
we own this to everyone who's not in this room to try.\n");
    
    printf("\n");
    printf("%d %i %i %i\n", 1004, 1234, INT_MAX, UINT_MAX); //overflow //1004 1234 2147483647 -1
    printf("%u %u %u\n", 1024, -1, UINT_MAX);               //overflow //1024 4294967295 4294967295
    
    printf("\n");
    printf("%f %f %lf\n", 3.141592f, d, d); //l in %lf is ignored //3.141592 3.141593 3.141593
    printf("%a %A\n", d, d);                //0x1.921fb6p+1 0X1.921FB6P+1
    printf("%e %E\n", d, d);                //3.141593e+00 3.141593E+00
    
    printf("\n");
    printf("%g %g\n", 123456.789, 1234567.89);   //123457 1.23457e+06
    printf("%G %G\n", 123456.789, 1234567.89);   //123457 1.23457E+06
    printf("%g %g\n", 0.00012345, 0.000012345);  //0.00012345 1.2345e-05
    printf("%G %G\n", 0.00012345, 0.000012345);  //0.00012345 1.2345E-05
    
    printf("\n");
    printf("%o\n", 9);  //11
    printf("%p\n", &d); //0x16fdff280 //pointer-of operator
    
    printf("\n");
    printf("%x %X\n", 11, 11);
    //printf("%%\n", d);    //Warning
    
    printf("\n");
    printf("%9d\n", 12345);         //    12345
    printf("%09d\n", 12345);        //000012345
    printf("%.2f\n", 3.141592);     //3.14
    printf("%.20f %.20lf\n", d, d); //3.14159274101257324219 3.14159274101257324219
    
    printf("\n");
    int n_printed = printf("Counting!\n");
    printf("%u\n", n_printed);      //10
    
    return 0;
}
