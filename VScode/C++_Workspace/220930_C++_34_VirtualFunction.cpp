#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

// virtual 함수 (가상함수)
// virtual 함수 (가상함수) : 동적결합에 의해 포인터 객체로 호출될 때만 효과를 발동하는 함수
// (virtual 키워드는 다형성을 위해 동적결합을 한 경우 오버라이딩처럼 차일드 함수가 우선으로 호출되게
// 하고 싶은 경우 사용하는 키워드)
//-- 가상함수로 해 놓은 개발자의 의도 : 그냥 써도 되고(일반 객체로 사용할 때)
//필요하면(동적할당으로 사용할 때 오버라이딩된 차일드 함수를 우선으로 호출되게 하려는 의도)

class CUnit
{
public:
	string m_Name;
	int    m_Hp;

public:
	CUnit()
	{
		m_Name = "";
		m_Hp = 100;
	}
	~CUnit() { }

	virtual void Update()
	{
		cout << "CUnit Update" << endl;
	}
};

class CHuman : public CUnit
{
public:
	int m_IQ;
public:
	CHuman() { m_IQ = 0; }
	~CHuman() {}

public:
	int GetIQ() { return m_IQ; }

	virtual void Update()
	{
		cout << "CHuman Update" << endl;
	}
};

void main()
{
	CHuman a_HH;
	a_HH.Update();

	CHuman* a_Unit = new CHuman();
	CHuman* a_HmObj = a_Unit;		//<-- 정적결합
	a_HmObj->Update();		//<-- 정적결합일 때 오버라이딩 함수 호출(자식쪽 함수 호출)

	CHuman* a_Charic = new CHuman();
	CUnit* a_PrObj = a_Charic;		//<-- 동적결합
	a_PrObj->Update();		//<-- 동적결합일 때 오버라이딩 함수 호출(virtual 안해주면 부모쪽 함수 호출)

	if (a_Unit != NULL)
	{
		delete a_Unit;
		a_Unit = NULL;
	}

	if (a_Charic != NULL)
	{
		delete a_Charic;
		a_Charic = NULL;
	}

	cin.get();
}