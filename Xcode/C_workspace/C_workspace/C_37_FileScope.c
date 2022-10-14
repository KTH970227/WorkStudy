#define _CRT_SECRUE_NO_WARININGS

#include <stdio.h>

//변수의 영역, 연결상태, 객체의 지속 기간
//Variable scopes(visibility)
//block, function, function prototype, file.

int g_i = 123;  //Global variable
int g_j;        //Global variable

void Func1(void)
{
    g_i++;
}

void Func2(void)
{
    g_i += 2;
}

int main()
{
    int local_1234 = 1234;
    
    func1();
    func2();
    
    printf("%d\n", g_i); //126
    printf("%d\n", g_j); //0
    printf("%d\n", local_1234); //1234
    
    return 0;
}
