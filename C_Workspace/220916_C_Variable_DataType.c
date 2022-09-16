typedef int bool;
#define true 1
#define false 0

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

    int eggz = 13;
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


    //2.실수형(Actual)
    //float    4Byte   서식문자(%f)
    //double   8Byte   서식문자(%lf)

    //ex)실수 변수 선언 예시
    float eee = 33.12f;
    double fff = 55.12f;
    printf("eee = %f // fff = %lf \n", eee, fff); //eee = 33.11999... // fff = 55.11999...


    //3.문자형(Character)
    //char             2Byte   서식문자(%s, %d)
    //unsigned char    1Byte   서식문자(%d) //0~255 값을 저장하는 용도

    //ex)문자 변수 선언 예시
    char a_xx = 'A'; //프로그램에서는 ' '로 묶어주면 문자 하나로 인식한다.
    //a_xx = '한';// <-- 한글 한글자는 짤리게 된다.
    printf("a_xx : %c (%d)\n", a_xx, a_xx); // a_xx : A (65)

    char a_tt = 82;
    printf("a_xx : %c (%d)\n", a_tt, a_tt); // a_xx : R (82)


    //4.문자열형(String)
    //const char* aabb = "반가워요 C언어";  서식문자(%s)
    //char aacc[] = "반가워요";
    //c++ --> STL string

    //ex)문자열 변수 선언 예시
    const char* aaee = "반가워요 C언어";
    printf("%s\n", aaee); //반가워요 C언어


    //5.논리형(Logical)
    //bool      1Byte    true OR false

    //ex)논리형 변수 선언 예시
    bool ppp = true; //초기값.
    
    //---bool test 코드 : 깜빡깜빡하는 효과 구현가능 
    bool test = true;

boolTest:
    if(test == true)
        printf("ON!");
    else
        printf("OFF!");

    getchar();

    test = !test; //ON! OFF! 번갈아가며 출력된다. 
goto boolTest;
    //---bool test 코드 : 깜빡깜빡하는 효과 구현가능 

    getchar();
}