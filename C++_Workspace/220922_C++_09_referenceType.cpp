#include <stdio.h>

//C++문법 참조형(참조자): 변수의 별명.
//참조형 -> 데이터형& 변수명 = 변수명;(초기화)
//C 포인터 대신에 사용할 수 있는 데이터형.
//참조형은 반드시 초기화해줘야 한다.(본체가 있어야 한다.)
void ValueFunction(int a)
{
	a = 999;
}
void PointFunction(int* a)
{
	*a = 999;
}
void RefFunction(int& a)
{
	a = 999;
}

int main()
{
	int a_Value = 10;
	ValueFunction(a_Value);
	printf("%d\n", a_Value);

	int a_Point = 10;
	PointFunction(&a_Point);
	printf("%d\n", a_Point);

	int a_Ref = 10;
	RefFunction(a_Ref);
	printf("%d\n", a_Ref);

	int AAA = 10;
	int& XXX = AAA;
	int& YYY = AAA;
	int& ZZZ = AAA;
	XXX = 777;
	printf("AAA(%d) : XXX(%d) : YYY(%d) : ZZZ(%d)", AAA, XXX, YYY, ZZZ);
	getchar();
}