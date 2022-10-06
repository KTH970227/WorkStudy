#define _CRT_SECRUE_NO_WARININGS

#include <stdio.h>

//문자열이 메모리에 저장되는 구조

int main()
{
    //숫자의 배열
    int a = 1;
    int int_arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    
    printf("%i %i %i\n", int_arr[0], int_arr[1], int_arr[9]);
    //printf("%i\n", int_arr[10000]); //배열의 크기를 넘어서지 않게 주의해야 한다.
    
    
    //문자의 배열
    char c = 'a';
    char str1[10] = "Hello";
    char str2[10] = { 'H', 'i' };
    
    printf("%c\n", c);    //a
    printf("%s\n", str1); //Hello
    printf("%s\n", str2); //Hi
    
    printf("%hhi %hhi %hhi %hhi %hhi\n", str2[0], str2[1], str2[2], str2[3], str2[4]);
    // 72 105 0 0 0  : ASCII Code로 반환
    
    //char str3[10] = "Hello, World"; (메모리 크기가 넘어가면 오류발생)
    char str3[20] = "Hello, \0World";
    printf("%s\n", str3); // Hello,  = \0 포함되어 문자열의 끝을 알리기 때문
    printf("%c\n", str3[10]); // r
    printf("%c\n", str3[11]); // l
    return 0;
}
