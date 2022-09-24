#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)
#include <iostream>
using namespace std;

// 생성자 함수의 오버로딩

// 생성자, 소멸자
// 생성자를 따로 설계하지 않으면 "디폴트생성자"와 "디폴트소멸자"가 자동으로 생성된다.

class UserInfo
{
public:
	char m_Name[128];
	int  m_Hp;
	int  m_Mp;
	int  m_Level;
	char* m_Nick = NULL;

public:
	UserInfo()  //<--생성자 함수
	{ //객체 선언시에 한번 자동으로 호출되고 주로 맴버 변수를 초기화 하는데 사용됨
		m_Name[0] = '\0';
		m_Hp = 0;
		m_Mp = 0;
		m_Level = 0;
		m_Nick = new char[128];
	}

	UserInfo(const char* a_Name, int a_Hp, int a_Mp, int a_Level) //<-- 생성자 오버로딩 함수
	{
		strcpy(m_Name, a_Name);
		m_Hp = a_Hp;
		m_Mp = a_Mp;
		m_Level = a_Level;
	}

	UserInfo(int a_Hp, int a_Mp) //<-- 생성자 오버로딩 함수
	{
		m_Hp = a_Hp;
		m_Mp = a_Mp;
	}

	~UserInfo() //<-- 소멸자 함수
	{ //객체가 소멸될 때 한번 자동으로 호출되고 주로 맴버변수의 동적할당된 변수를 해제해 주는 용도로 사용된다.
		if (m_Nick != NULL)
		{
			delete[] m_Nick;
			m_Nick = NULL;
		}
	}

public:
	void PrintInfo()
	{
		cout << m_Name << " : Hp(" << m_Hp << ") " <<
				 "Mp(" << m_Mp << ") " <<
				 "Lv(" << m_Level << ")" << endl;
	}
};

void main()
{
	UserInfo a_User;	//생성자 함수 호출됨
	strcpy(a_User.m_Name, "홍길동");
	a_User.m_Hp = 100;
	a_User.m_Mp = 10;
	a_User.m_Level = 5;
	a_User.PrintInfo();

	UserInfo a_MyChar("아기상어", 110, 80, 17);
	a_MyChar.PrintInfo();

	int aaa;
	aaa = 10;

	int bbb = 10;

	cin.get();

}