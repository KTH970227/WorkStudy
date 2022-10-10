#define _CRT_SECRUE_NO_WARININGS

#include <stdio.h>

//펙토리얼 기능 구현

long loop_factorial(int n);
long recursive_factorial(int n);

int main()
{
    int num = 5;
    
    printf("%ld\n", loop_factorial(num));
    printf("%ld\n", recursive_factorial(num));
    
    return 0;
}

long loop_factorial(int n)
{
    long ans;
    
    for(ans = 1; n > 1; n--)
    {
        ans *= n;
    }
    
    return ans;
}

long recursive_factorial(int n)
{
    if(n > 0)
    {
        return recursive_factorial(n - 1);
    }
    else
        return 1;
}
