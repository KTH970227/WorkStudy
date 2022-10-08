#define _CRT_SECRUE_NO_WARININGS

#include <stdio.h>
#include <inttypes.h> //intmax_t

//printf() 함수가 인자들을 해석하는 과정
//Arguments Read
//스택(Stack)에 쌓임

int main()
{
    //multiple inputs with blank speparators
    int i;
    float f;
    char str[30];
    scanf("%d %f %s", &i, &f, str);  //123 123 hhhh
    printf("%d %f %s\n\n", i, f, str); //123 123.000000 hhhh
    
    
    //character
    char c;
    scanf("%c", &c);   //A
    printf("%i\n", c); //65 (ASCII Code)
    
    //Unsigned as signed
    unsigned ui;
    scanf("%i", &ui);    //123
    printf("%i\n", ui);  //123
    
    //Unsigned as unsigned
    unsigned i2;
    scanf("%u", &i2);    //-1024
    printf("%u\n", i2);  //4294966272 (error)
    
    //floating point numbers
    // l for double for %f %e %E %g %G
    double d = 0.0f;
    scanf("%lf", &d);    //123.33
    printf("%f\n", d);  //123.330000
    scanf("%f", &d);    //123.33
    printf("%f\n", d);  //000.000000 (error)
    
    //Width
    char str2[30];
    scanf("%5s", str2);    //sdfgggh
    printf("%s\n", str2);  //sdfgg (몇개까지 출력할 것인지)
    
    //h modifier
    char i3;
    scanf("%hhd", &i3);  //2   256   1024
    printf("%i\n", i3);  //2    0     0
    
    //integer with characters
    int i4;
    scanf("%i", &i4);    //123a45
    printf("%i\n", i4);  //123

    //j modifier
    intmax_t i5;
    scanf("%ji", &i5);    //12239823832872
    printf("%ji\n", i5);  //12239823832872

    //Regular characters
    int a, b;
    scanf("%d,%d", &a, &b);    //123,456
    printf("%d %d\n", a, b);   //123 456
    
    //char receives blank
    int a2, b2;
    char c2;
    scanf("%d%c%d", &a2, &c2, &b2);    //123A456
    printf("%d|%c|%d\n", a2, c2, b2);  //123|A|456
    
    
    
    //return value of scanf()
    int a3, b3;
    int si = scanf("%d %d", &a3, &b3);
    printf("%d\n", si);     //2
    
    //*modifier for printf()
    int ii = 123;
    int width = 5;
    printf("Input width : ");
    scanf("%d", &width);        //1  5
    printf("%*d\n", width, ii); //123  123
    
    //*modifier for scanf()
    int iii;
    scanf("%*d%*d%d", &iii);              //123 567 890
    printf("Your third input=%d\n", iii); //Your third input=890

    return 0;
}
