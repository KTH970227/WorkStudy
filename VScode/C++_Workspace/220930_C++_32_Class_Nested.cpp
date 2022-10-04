#include <stdio.h>
#include <iostream>
using namespace std;

//중첩클래스
//클래스 안에서 클래스를 설계할 수 있다.
//enum 형도 선언할 수 있고, 변수 선언 및 배열, 동적할당, 함수설계 등 모든 걸 할 수  있으므로
//즉, 클래스 안에서 모든 걸 할 수 있으므로 독립적인 프로그램처럼(부품) 만들 수 있다는 의미

class Outer
{
	public:
		static const int m_ii;

public:
	enum COut	//클래스 안에서 enum 선언해서 클래스 내부에서만 사용하는 경우
	{
		One = 1,
		Two = 2
	};

	class Inner	//클래스 안에서 클래스를 설계하는 경우
	{
		private:
			int memA;

		public:
			Inner(int a = 0) : memA(a) { }
			int GetA() { return memA; }
	};

	Inner obj;	//중첩클래스로 맴버변수(객체) 선언

public:
	Outer(int a = 0) : obj(a) { }
	void ShowOut()
	{
		cout << "맴버값 = " << obj.GetA() << " : " << One << endl;
	}
};

const int Outer::m_ii = 0;

void main()
{
	Outer a_Out(345);
	a_Out.ShowOut();

	//Inner abc(123); //<-- 외부에서 class Inner를 사용할 수 없다.

	Outer::Inner aabb(123); //<-- public 속성이면 외부에서도 보기화 같은 방법으로 사용할 수 있다.
	cout << aabb.GetA() << endl << Outer::One << endl;

	cout << Outer::m_ii;

	cin.get();
}