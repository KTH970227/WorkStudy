#include <stdio.h>
#include <vector>
#include <map>
#include <string>
#include <iostream>
using namespace std;

// template(템플릿) : 데이터형에 따라 여러개의 함수 또는 class를 생산할 수 있는 기본 틀을 정의하는 것
// 템플릿 함수 : 여러 데이터형에 따른 함수를 여러개 생산할 수 있는 기본 틀을 정의하는 것
// 컴파일시에 사용된 T 데이터형에 따라서 함수가 만들어 진다.(붕어빵 틀에서 붕어빵을 찍어내듯이...)
// 템플릿은 내부적으로 에러가 있어도 비주얼스튜디오 툴에서 에러를 표시해 주지 않고 컴파일시에
// 에러 메시지를 띄워준다.

//int Sum(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//
//float Sum(float a, float b) //<-- 함수의 오버로딩
//{
//	float c = a + b;
//	return c;
//}
//
//double Sum(double a, double b) //<-- 함수의 오버로딩
//{
//	double c = a + b;
//	return c;
//}

template <typename T>
T Sum(T a, T b)
{
	T c = a + b;
	//주의사항 : 템플릿 구현부 본체는 범용적으로 구현해야 한다.
	//printf("%d\n", c);
	return c;
}

//---- 두개 이상의 타입을 전달 받을 수도 있다.
template <typename T1, typename T2>
T1 Sum2(T1 a, T2 b)
{
	T1 c = a + b;
	return c;
}

template <typename T>
void Swap(T& a, T& b)
{
	T t;
	t = a;
	a = b;
	b = t;
}

void main()
{
	int a_ii = Sum<int>(11, 22);
	cout << a_ii << endl;

	float a_xx = Sum<float>(33.3f, 44.4f);
	cout << a_xx << endl;

	double a_yy = Sum<double>(33.3, 44.4);
	cout << a_yy << endl;

	float a_ff = Sum2<float, int>(32.1f, 22);
	cout << a_ff << endl;

	//------------ 구조체 객체 초기화
	struct tag_st
	{
		int i;
		double d;
	};

	//tag_st a_aa;
	//a_aa.i = 20;
	//a_aa.d = 30.1;

	//tag_st a_bb = { 20, 30.1 }; //<-- 구조체 선언과 동시에 초기화
	//------------ 구조체 객체 초기화

	////------------ 클래스 객체 초기화
	//class Test
	//{
	//	public:
	//		int i;
	//		double d;

	//public:
	//	Test(int a = 0, double b = 0) : i(a), d(b) //<-- 생성자 오버로딩 함수를 통한 초기화
	//	{
	//	}
	//};

	//Test a_cc = { 20, 30.1 };	//<-- 클래스 선언과 동시에 초기화
	//Test a_dd(20, 30.1);		//<-- 클래스 선언과 동시에 초기화
	////------------ 클래스 객체 초기화

	tag_st a_nn = { 20, 30.1 };
	tag_st a_mm = { 90, 90.1 };
	Swap<tag_st>(a_nn, a_mm);

	printf("a_nn.i = %d : a_nn.d = %.1f\n", a_nn.i, a_nn.d);
	printf("a_mm.i = %d : a_mm.d = %.1f\n", a_mm.i, a_mm.d);

	cin.get();
}