#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    char c = 'A';
    char d = '*';
    printf("%c %hhd\n", c, c);
    printf("%c %hhd\n", d, d);
    printf("%c \n", c + 1);
    
    
    char a = '\a';
    printf("%c", a);
    printf("\07");   //8진수
    printf("\x07");  //16진수
    
    
    //-----밑줄 있는 상태로 입력 받기
    float salary;
    //printf("$______");
    printf("$______\b\b\b\b\b\b");
    scanf("%f", &salary);
    
    
    // \t로 정렬
    printf("AB\t CDEF\n");
    printf("ABC\t DEF\n");
    
    
    printf("\\ \'HA+\' \"Hello\" \?\n");
    //결과 : \ 'HA+' "Hello" ?
    
    return 0;
}
