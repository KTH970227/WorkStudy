#include <stdio.h>
#include <iostream>
using namespace std;

// 맴버 초기화 리스트
// 클래스 내부에서 꼭 변수 선언과 동시에 초기화 해 주어야 하는 경우들이 있다.
// 그런 경우 맴버 초기화 리스트를 통해서 초기화 해 주어야 한다.

// 1, 인스턴스별로 const 맴버 변수를 초기화 해 주고 싶을 때 사용된다.

// 2, 인스턴스별로 &(참조형) 맴버 변수를 초기화 해 주고 싶을 때 사용된다.

// 3, 클래스 안에 클래스 객체 변수가 선언되어 있는데 맴버 클래스의 설계부에
// 오버로딩 생성자 함수가 있는 클래스가 있는 경우는 반드시 생성자 호출시 초기화가 필요하다.
// 이런 경우에는 맴버 초기화 리스트를 사용하여 초기화 해 주어야 한다.
// (생성자에서 생성자를 연쇄적으로 호출해야 하는 경우)

// 4, 상속관계에 있는 경우 부모쪽 맴버변수들을 초기화 해 주어야 하는 경우

class Position
{
public:
	int x = 0, y = 0; //1번 맴버변수 선언과 동시에 초기화
	const int cst = 11;
	int& m_ee = x;

public:
	Position()
	{
	}

	Position(int in) : cst(in)
	{
	}

	Position(int ax, int ay, int& a_ee) : x(777), y(888), m_ee(a_ee) //2번 맴버 초기화 리스트
	{
		x = ax;		//3번 생성자 오버로딩함수의 매개변수들을 이용한 값 대입
		y = ay;
	}

public:
	void PrintInfo()
	{
		cout << "x = " << x << ", y = " << y << endl;
	}
};

class MyPos
{
public:
	int x, y;

public:
	// 생성자 오버로딩 함수만 만들고 디폴트 생성자를 생략하면 
	// 자동으로 디폴트 생성자는 만들어지지 않는다.
	MyPos(int ax, int ay) 
	{
		x = ax;
		y = ay;
	}
};

class Some
{
public:
	int aaa = 0;
	MyPos Pos;

	//Some() : Pos(0, 0)
	//{
	//}

	Some(int ax = 0, int ay = 0) : Pos(ax, ay)
	{

	}
};

void main()
{
	int Ref = 900;

	Position AAA(111, 222, Ref);
	AAA.x = 55;  //<-- 4번 객체를 통한 맴버변수 초기화
	AAA.y = 77;
	AAA.PrintInfo();

	Position CCC(77);
	Position DDD(88);
	Position EEE(99);

	cout << CCC.cst << " : " << DDD.cst << " : " << EEE.cst << endl;

	Position XXX(111, 222, Ref);
	Position YYY(111, 222, Ref);
	Position ZZZ(111, 222, Ref);
	Ref = 1800;

	cout << XXX.m_ee << " : " << YYY.m_ee << " : " << ZZZ.m_ee << endl;

	Some ABC;
	cout << ABC.Pos.x << " : " << ABC.Pos.y << endl;

	Some CDE(11, 22);
	cout << CDE.Pos.x << " : " << CDE.Pos.y << endl;

	cin.get();
}