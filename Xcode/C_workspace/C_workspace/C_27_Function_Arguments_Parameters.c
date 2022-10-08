#define _CRT_SECRUE_NO_WARININGS

#include <stdio.h>

//함수의 인수와 매개변수
//인수 Arguments Parameters

void draw(int n);

int main()
{
    int i = 5;
    char c = '#';
    float f = 7.1f;
    
    draw(i);
    draw(c);
    draw(f);
}

void draw(int n)
{
    //TODD : print starts
    while (n-- > 0)
        printf("*");
    printf("\n");
}
