#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS

// scanf() : 입력받는 함수
// & : ampersant = 변수의 주소를 알기 위해 사용, 메모리에 직접 접근

int main()
{
    int  i = 0;
    
    scanf("%d", &i);
    
    printf("Value is %d\n", i);
    
    return 0;
}
