#define _CRT_SECRUE_NO_WARININGS

#include <stdio.h>

#define MONTHS 12

int main()
{
    int high[MONTHS] = { 2, 5, 11 , 18, 23, 27, 29, 30, 26, 20, 12, 4 };
    
    for(int i = 0; i < MONTHS; ++i)
        printf("%d ", high[i]);
    printf("\n");
    
    float avg = 0.0f;
    for(int i = 0; i < MONTHS; ++i)
        avg += high[i];
    
    printf("Average = %f\n", avg / (float)MONTHS);
    
    //Address
    high[0] = 1;
    high[1] = 2;
    printf("%p %p\n", high, &high[0]);
    
    for(int i = 0; i < MONTHS; ++i)
        printf("%lld\n", (long long)&high[i]); //4씩 증가
    printf("\n");
    
    
    //Error : 범위를 넘어설 때
    //high[12] = 4;
    //high[-1] = 123;
    
    
    //const and array
    const int temp = 0;
    //temp = 4;    Error
    const int low[12] = { -7, -5, 1, 7, 13, 18, 22, 22, 16, 9, 2, -5 };
    //low[0] = 123; Error
    
    
    //array is not initialized
    static int not_init[4];
    for(int i = 0; i < 4; ++i)
        printf("%d\n", not_init[i]);
    
    //Partially initialized
    int insuff[4] = { 2, 4 };
    for(int i = 0; i < 4; ++i)
        printf("%d\n", insuff[i]);
    
    //Overlly initialized
    //int over[2] = { 2, 4, 8, 16 }; Error
    
    //Omitting size
    const int power_of_twos[] = { 1, 2, 4, 8, 16, 32, 64};
    
    printf("%ld\n", sizeof(power_of_twos));
    printf("%ld\n", sizeof(int));
    printf("%ld\n", sizeof(power_of_twos[0]));
    
    for(int i = 0; i < sizeof power_of_twos / sizeof power_of_twos[0]; ++i)
        printf("%d\n", power_of_twos[i]);
    
    //Designated initializers
    int days[MONTHS] = { 31, 28, [4] = 31, 30, 31, [1] = 29 };
    for(int i = 0; i < MONTHS; ++i)
        printf("%d\n", days[i]);
    
    //Specifying Array sizes
    int arr1[MONTHS]; //Symbolic integer constant
    double arr2[123]; //Symbolic integer constant
    float arr3[3*4 + 1];
    float arr4[sizeof(int) + 1];
    //float arr5[-10]; Error
    //float arr6[0];   Error
    //float arr7[1.5]; Error
    float arr8[(int)1.5];
}
