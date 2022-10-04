#include<stdio.h>

//C#언어
//Value Type : 일반변수, 구조체 객체
//Reference Type : 배열, 클래스 객체, (ref, out : 일반변수)

//C언어, C++언어
//Value Type : 일반변수, 구조체 객체, 클래스 객체
//Reference Type : 배열, 포인터, 참조형
//Call by Reference 장점
void Func(int a)//Call by Value
{
	a = 200;
}

void RefFunc(int* a,float* b, short* c)//Call by Reference
{//여러 데이터형 변수값을 리턴 받을 수 있는 효과를 얻을 수 있다.
	*a = 200;
	*b = 12.3f;
	*c = 11;
}

int Add()
{
	int a = 200;
	return a;
}

void RefArray(int* r, int c)
{//배열처럼 큰 메모리를 가볍게 매개변수로 넘기고 싶을 때 유용하게 사용할 수 있다.
	for (int i = 0; i < c; i++)
	{
		r[i] = 999;
	}
}
int main()
{
	int AAA = 0;
	Func(AAA);
	printf("%d\n", AAA);

	int BBB = 0;
	float XXX = 0.0f;
	short YYY = 0;
	RefFunc(&BBB, &XXX,&YYY); 
	printf("%d : %f : %d\n", BBB, XXX, YYY);

	int a_Arr[100] = { 0 };
	int a_Count = 100;
	RefArray(a_Arr, a_Count);
	for (int i = 0; i < a_Count; i++)
	{
		printf("a_Arr[%d] = %d\n", i, a_Arr[i]);
	}

	getchar();
}