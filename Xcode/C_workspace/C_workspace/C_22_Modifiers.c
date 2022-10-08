#define _CRT_SECRUE_NO_WARININGS

#include <stdio.h>
#include <limits.h>>
//변환 지정자의 수식어들(Modifiers)

int main()
{
    printf("%10i\n", 1234567);      //   1234567
    printf("%-10i\n", 1234567);     //1234567
    printf("%+i %+i\n", 123, -123); //+123 -123
    printf("% i % i\n", 123, -123); // 123 -123
    printf("%X\n", 17);             //11
    printf("%#X\n", 17);            //0X11
    printf("%05i\n",123);           //00123
    printf("%*i\n", 7, 456);        //    456
    
    printf("\nnPrecision\n");
    printf("%.3d\n", 1024);            //1024
    printf("%.5d\n", 1024);            //01024
    printf("%.3f\n", 123456.1234567);  //123456.123
    printf("%.3f\n", 123456.1235);     //123456.124
    printf("%10.3f\n", 123.45678);     //   123.457
    printf("%010.3f\n", 123.45678);    //000123.457
    printf("%.5s\n", "ABCDEFGHIJKLMN");//ABCDE
    printf("%.s\n", "ABCDEFGHIJKLMN"); //0
    
    printf("\nLength\n");
    printf("%hhd %hd %d\n", 257, 257, 257); //1 257 257
    printf("%d %lld %lld\n", INT_MAX +1, INT_MAX +1, 2147483648LL); //-2147483648 -2147483648 2147483648
    
    return 0;
}
