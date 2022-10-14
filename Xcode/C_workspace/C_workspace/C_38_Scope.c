#define _CRT_SECRUE_NO_WARININGS

#include <stdio.h>

//Variable scopes(visibility)
//block, function, function prototype, file.

void f1(int hello, double world);

void func_block(double d)
{
    double p = 0.0;
    
    int i;
    for(i = 0; i < 10; i++)
    //for(int i = 0; i < 10; i++)//C99
    {
        double q = d * i;
        p *= q;
        
        if(i == 5)
            goto hello;
    }
    
hello:
    printf("Hello, world");
    
    return p;
}


int main()
{
    func_block(1.0);
}

void f1(int hello, double world)
{
    //....
}
