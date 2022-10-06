#define _CRT_SECRUE_NO_WARININGS

#include <stdio.h>

//기호적 상수(Symbolic sonstants)
//전처리기 (#define)
#define PI 3.141592f
#define AI_NAME "Jarvis"
//const float PI = 3.141592f; : 상수변수로 만들어도 된다.

int main()
{
    //원의 넓이, 둘레를 구하는 프로그램
    float radius, area, circum;
    
    printf("I'm %s. \n", AI_NAME);
    printf("Please, Input radius\n");
    
    scanf("%f\n", &radius);
    

    //원의 넓이 공식 pi * r * r
    area = PI * radius * radius;
    //원의 둘레 공식 2.0 * pi * r
    circum = 2.0 * PI * radius;
    
    printf("Area is %f\n", area);
    printf("Circum is %f\n", circum);
    return 0;
}
