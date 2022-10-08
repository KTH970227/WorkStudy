#define _CRT_SECRUE_NO_WARININGS

#include <stdio.h>

//분기문 BranchingStatment

int main()
{
    int input;
    
    printf("Input integers : ");
    scanf("%d", &input);
    
    if(input % 3 == 0)
        printf("A\n");
    
    else if(input % 3 == 1)//if(input % 3 == 1)
        printf("B\n");
    
    else //if(input % 3 == 2)
        printf("C\n");
    
    return 0;
}
