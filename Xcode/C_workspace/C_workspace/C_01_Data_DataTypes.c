#include <stdio.h>

//변수(Variable) : 일반적이고 확장된 개념의 기능 함수라 생각함.
//1Byte : char, unsigned char, signed char
//2Byte : short, unsigned short
//4Byte : int, unsigned int, long, unsigned long, float
//8Byte : double, long double

int main()
{
    char a_c;
    unsigned char a_Uc;
    signed char a_Sc;
    
    a_c = 'a';
    a_Uc = 'A';
    a_Sc = 'B';
    printf("1Byte : %c : %c : %c\n", a_c, a_Uc, a_Sc);
    
    
    short a_s;
    unsigned short a_Us;
    
    a_s = 111;
    a_Us = 222;
    
    printf("2Byte : %d : %d \n", a_s, a_Us);
    
    int a_i;
    unsigned int a_Ui;
    long a_l;
    unsigned long a_Ul;
    float a_f;
    
    a_i = 333;
    a_Ui = 444;
    a_l = 555;
    a_Ul = 555;
    a_f = 3.14f;
    
    printf("4Byte : %d : %d : %ld : %ld : %f \n", a_i, a_Ui, a_l, a_Ul, a_f);
    
    
    double a_d;
    long double a_Ld;
    
    a_d = 666.66;
    a_Ld = 777.77;
    
    printf("8Byte : %f : %Lf \n", a_d, a_Ld);
    
    return 0;
}
