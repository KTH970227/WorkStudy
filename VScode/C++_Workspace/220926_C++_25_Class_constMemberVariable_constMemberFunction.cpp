#include <stdio.h>
#include <iostream>
using namespace std;

// class의 const 맴버변수, const 맴버함수
// const 맴버변수는 초기화 반드시 필요하다.

// class의 const 맴버 변수 초기화 2가지 방법
// 1, 변수 선언과 동시에 초기화 해 주는 방법(생성되는 모든 객체가 같은 값을 갖게 된다.)
// 2, 생성자 초기화 리스트를 통해 객체별로 초기화 하는 방법(생성되는 객체들은 다른 값을 갖게 된다.)

class Unit
{
public:
	//const int m_Number = 11;
	const int m_Number;

	int m_Level = 0;
	int m_Exp = 0;

public:
	//Unit()
	//{
	//}

	Unit(int Num) : m_Number(Num)
	{
	}

	void ShowList() const 
	{
		//const를 맴버 함수 뒤에 써주게 되면 함수내에서 맴버변수값을 변경할 수 없다.
		//함수내의 맴버변수들 사용은 리드온리(읽기전용)로 만들겠다는 뜻
		//클래스 맴버함수는 우리 전체 소스에서 어디에 어떻게 사용되고 있는지 알 수 없다.
		//이 함수안에서 맴버변수의 값을 바꾸면 어딘가에서 사용하고 있는 ShowList()
		//함수로 인하여 문제가 발생할 수도 있고 그런 경우를 막고 싶을 때 
		//함수 뒤에 const 키워드를 붙인다.

		// m_Level = 5;
		// m_Exp = m_Exp + 10;

		cout << "Lv(" << m_Level << ") " << 
				"Exp(" << m_Exp << ")" << endl;
	}
};

void main()
{
	//Unit AAA;
	//cout << "AAA.m_Number : " << AAA.m_Number << endl;

	//Unit BBB;
	//cout << "BBB.m_Number : " << BBB.m_Number << endl;

	//Unit CCC;
	//cout << "CCC.m_Number : " << CCC.m_Number << endl;

	Unit DDD(35);
	cout << "DDD.m_Number : " << DDD.m_Number << endl;

	Unit EEE(77);
	cout << "EEE.m_Number : " << EEE.m_Number << endl;

	Unit FFF(99);
	cout << "FFF.m_Number : " << FFF.m_Number << endl;

	FFF.ShowList();

	cin.get();
}