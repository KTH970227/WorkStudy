#include <stdio.h>
#include <iostream>
using namespace std;

// 함수의 오버로딩
//			: 함수 매개변수(인수)의 형식만 다르면 같은 함수명을 사용할 수 있다.

//기본용도는 하나의 함수 이름으로 다양한 데이터형 매개변수를 편하게 사용하기 위해서 사용되는 문법

// <주의사항>
// 1, 리턴 타입만 다른 경우는 안된다.
//double Add(int a, int b)
//{
//	return (double)(a + b);
//}

// 2, 레퍼런스(참조형 : 데이터형)과 일반 변수 경우는 같이 사용이 안된다.
//int Add(int& a, int& b)
//{
//	return a + b;
//}

// 3, 같은 데이터형이면 변수명이 다르더라도 같은 함수로 보고 허용하지 않는다.
//int Add(int, int);
//int Add(int x, int y)
//{
//	return x + y;
//}

// 4, 디폴트 인수 사용의 함수 오버로딩도 주의해야 한다.
//int Add(int a, int b, int c = 0)
//{
//	return a + b + c;
//}

int Add(int a, int b)
{
	return a + b;
}

int Add(int a)
{
	return a + 23;
}

float Add(float c, float d)
{
	c *= 3;
	d += 2;

	return c + d;
}

double Add(double a, double b)
{
	return a + b;
}

int Add(int a, int b, int c)
{
	return a + b + c;
}


void main()
{
	int Ret = Add(11, 22);
	cout << "Ret : " << Ret << endl;

	int a_iRe = Add(55);
	cout << a_iRe << endl;

	float a_fRe = Add(23.1f, 24.2f);
	cout << a_fRe << endl;

	double a_dRe = Add(123.1, 234.2);
	cout << a_dRe << endl;

	int a_Re3 = Add(11, 22, 33);
	cout << a_Re3 << endl;

	int rr1 = abs(-56); //절대값을 구해주는 함수
	float rr2 = abs(-12.3f);
	double rr3 = abs(3.12);
	//기본용도는 하나의 함수 이름으로 다양한 데이터형 매개변수를 편하게 사용하기 위해서 사용되는 문법

	//int XX = 11;
	//int YY = 22;
	//int Test = Add(XX, YY);
	//cout << "Test : " << Test << endl;

	cin.get();
}