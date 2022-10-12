#define _CRT_SECRUE_NO_WARININGS

#include <stdio.h>

void swap(int *x,int *y);

int main()
{
    int a1 = 10;  //변수 a가 double이면 포인터도 더블 ,인트면 포인터도 인트
    int *pA = NULL;   //포인터를 쓰기 위해서는 포인터를 꼭 초기화 해줘야됨.
    //포인터 이름은 소문자로 시작하고 그 다음 알파벳 부터 대문자로 써야됨.
    
    pA = &a1; //주소값a를 pA에 넣음
    *pA = 20; //*pA 즉 주소값이 a와 똑같은 포인터에 20 을 넣음
    //주소값이 a와 같으므로 a에20을 넣은 것과 같음
    printf("%d",a1);
    
    
    //포인터로 a=200,b=100으로 바꾸기
    int a = 100, b = 200;
    printf("%d %d\n",a,b); //a=100,b=200

    swap(&a, &b); //포인터로 바꾸므로 주소값을 넣어줘야됨.
    printf("%d %d\n", a, b); //a=200,b=100

    return 0;
}

void swap(int *x,int *y)//*x를 사용함으로 인해 주소값을 받아올 수 있음.
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
