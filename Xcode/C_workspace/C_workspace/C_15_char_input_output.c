#define _CRT_SECRUE_NO_WARININGS

#include <stdio.h>

//문자열 입출력하기

int main()
{
    char fruit_name[40]; //
    
    printf("What is your farovate fruit?\n");
    
    scanf("%s", fruit_name);
    
    printf("You like %s!\n", fruit_name);
    
    return 0;
}
