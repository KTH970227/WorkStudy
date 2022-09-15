#include <stdio.h>
//변수 : 값을 담아두는 저장공간(메모리)을 의미한다.
//변수의 선언 : 데이터형 변수명;, 데이터형 변수명 = 초기값;
//프로그래밍에서 '=' 은 대입연산자이다.

int main(){
    //1.정수형(Integer)
    //short   2Byte   서식문자(%d)
    //int     4Byte   서식문자(%d)
    //long    4Byte   서식문자(%d)

    //unsigned short  2Byte   서식문자(%u)
    //unsigned int    4Byte   서식문자(%u)
    //unsigned long   4Byte   서식문자(%lu)

    //ex)정수 변수 선언 예시 
    int Temp;
    Temp = 11;
    Temp = 50; //11를 쫒아내고 50을 넣는다. 

    int eggz = 14;
    int fizz = 10;

    printf("%d : %d\n", eggz, fizz); //%d : 서식문자 

    //short abc = -32769; //범위를 벗어나면 이상한 값으로 나온다. 
    short abc = -100;
    printf("%d\n", abc);

    unsigned short uuu1 = 222;
    uuu1 = 123 + 678;
    uuu1 = 678 - 123;
    printf("%u\n", uuu1);

    unsigned int uuu2 = 444;
    printf("%u\n", uuu2);

    unsigned long uuu3 = 4444;
    printf("%lu\n", uuu3);
}