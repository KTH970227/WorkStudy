#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int i = 0, j = 0;

    printf("Input two integers\n");

    scanf("%d%d", &i, &j);

    int sum = i + j;

    printf("i(%d) + j(%d) = %d \n", i, j, sum);

    //----------------------------------------
    
    float won = 0.0f;
    float dollar = 0.0f;
    
    printf("Input won\n");
    scanf("%f", &won);
    
    dollar = won * 0.00089f;
    
    printf("Dollar = %f\n", dollar);
    
    return 0;
}
