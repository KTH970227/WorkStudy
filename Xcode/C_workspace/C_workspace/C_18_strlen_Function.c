#define _CRT_SECRUE_NO_WARININGS

#include <stdio.h>
#include <string.h> //strlen()
#include <stdlib.h> //malloc()
//strlen() : 문자열의 길이를 알기 위해 사용

int main()
{
    char str1[100] = "Hello";
    char str2[] = "Hello";
    char str3[100] = "\0";
    char str4[100] = "\n";
    
    printf("str1 : size %zu : length %zu\n", sizeof(str1), strlen(str1));//str1 : size 100 : length 5
    printf("str2 : size %zu : length %zu\n", sizeof(str2), strlen(str2));//str2 : size 6 : length 5
    printf("str3 : size %zu : length %zu\n", sizeof(str3), strlen(str3));//str3 : size 100 : length 0
    printf("str4 : size %zu : length %zu\n", sizeof(str4), strlen(str4));//str4 : size 100 : length 1
        
    
    //Extra
    char* str5 = (char*)malloc(sizeof(char) * 100);
    str5[0] = 'H';
    str5[1] = 'e';
    str5[2] = 'l';
    str5[3] = 'l';
    str5[4] = 'o';
    str5[5] = '\0';

    printf("str5 : size %zu : length %zu\n", sizeof(str5), strlen(str5));
    
    return 0;
}
