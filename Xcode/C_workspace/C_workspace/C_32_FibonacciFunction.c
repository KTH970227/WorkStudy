#define _CRT_SECRUE_NO_WARININGS

#include <stdio.h>

//피보나치 기능 구현
//메모리가 많이 차지함
//중복 발생

int fibonacci(int number);

int main()
{
    for(int count  = 1; count < 13; ++count)
        printf("%d\n", fibonacci(count));
    
    return 0;
}

int fibonacci(int number)
{
    if(number > 2)
        return fibonacci(number - 1) + fibonacci(number - 2);
    else
        return 1;
}
