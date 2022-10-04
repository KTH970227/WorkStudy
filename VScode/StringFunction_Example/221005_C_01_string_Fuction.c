#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    //-----------strlen() : 인수로 전달받은 문자열의 길이를 반환하는 함수
    char str[] = "C언어";
    printf("이 문자열의 길이는 %lu입니다.\n", strlen(str));



    //-----------strcat(), strncat() : 하나의 문자열에 다른 문자열을 연결해주는 함수
    char catStr01[20] = "C Language is ";
    char catStr02[] = "Cool! and funny!";

    //strcat(str01, str02); //배열의 크기가 넉넉할 때 오버플로우가 발생하지 않음.
    strncat(catStr01, catStr02, 5); //추가할 문자열 크기를 정해서 넣을 수 있음
    printf("합친 문자열 : %s \n", catStr01 );



    //-----------strcpy(), strncpy() : 문자열을 복사하는 함수 
    char cpyStr01[20] = "C is Cool!";
    char cpyStr02[11];

    strcpy(cpyStr02, cpyStr01);
    printf("strcpy : %s\n", cpyStr02);

    //str02 배열의 크기만큼만 복사를 진행하며, 
    //마지막 한 문자는 널 문자를 위한 것
    //cpyStr01를 cpyStr02 크기만큼 cpyStr02에 복사한다.
    strncpy(cpyStr02, cpyStr01, sizeof(cpyStr02) - 1);
    cpyStr02[sizeof(cpyStr02) - 1] = '\0';

    printf("strncpy : %s\n", cpyStr02);



    //-----------strcmp(), strncmp() : 문자열 내용을 비교하는 함수
    //1.문자열 포인터를 전달받고, 해당 포인터가 가르키는 문자열의 내용을 비교함.
    //2.두 문자열의 모든 문자는 아스키코드값으로 자동 변환
    //3.문자열 맨 앞에서부터 순서대로 비교함.
    //(1) > (2) : 양수, (1) = (2) : 0, (1) < (2) : 음수
    char cmpStr01[20] = "KTH970";

    if(strcmp(cmpStr01, "KTH") == 0)
        printf("KTH 정답니다.\n");
    else if(strcmp(cmpStr01, "KTH") != 0)
        printf("틀렸습니다.\n");

    //세번째 인수로 비교할 문자의 개수를 지정할 수 있음.
    if(strncmp(cmpStr01, "KTH", 3) == 0)
        printf("yes\n");
    else
        printf("no\n");



    //-----------atoi(), atol(), atoll(), atof()
    //#include <stdlib.h> 추가
    //atoi() : int형 정수로 변환
    //atol() : long형 정수로 변환
    //atoll() : long long형 정수로 변환
    //atof() : double형 실수로 변환

    char atoiStr[] = "123";
    char atolStr[] = "456";
    char atollStr[] = "123456";
    char atofStr[] = "123.456";

    printf("int형 정수로 변환 : %d\n", atoi(atoiStr));
    printf("long형 정수로 변환 : %ld\n", atol(atolStr));
    printf("long long형 정수로 변환 : %lld\n", atoll(atollStr));
    printf("double형 실수로 변환 : %f\n", atof(atofStr));



    //-----------toupper(), tolower()
    //#include <ctype.h> 추가
    //toupper() : 대문자로 변환해주는 함수
    //tolower() : 소문자로 변환해주는 함수

    int i, str_len;
    char testStr[] = "abcdefg";
    printf("처음 문자열 : %s\n", testStr);

    str_len = strlen(testStr);
    for(i = 0; i < str_len; i++)
    {
        testStr[i] = toupper(testStr[i]);
    }
    printf("모두 대문자로 문자열 : %s\n", testStr);

    for(i = 0; i < str_len; i++)
    {
        testStr[i] = tolower(testStr[i]);
    }
    printf("모두 소문자로 문자열 : %s\n", testStr);

}