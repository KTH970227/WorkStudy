#include <stdio.h>
#include <string.h>
//#include <vector>
#include <iostream>
using namespace std;
#pragma warning(disable: 4996)

//복사 생성자
// 1, 객체에 객체를 복사할 때 class 내부에 char 배열이 있으면 strcpy()가 자동으로 적용된다.
// 2, 객체에 객체를 복사할 때 class 내부에 포인터가 있으면 주소값만 복사된다.

// 복사 생성자가 필요한 경우
// class 내부에 포인터가 있고, 동정할당를 하고 객체 대 객체를 복사하는 경우

//복사 생성자
class Person
{
private:
	char m_Name[128];
	int  m_Age;

public:
	Person(const char* a_Name, int a_Age)
	{
		strcpy(m_Name, a_Name);
		m_Age = a_Age;
	}
	void PrintPerson()
	{
		cout << "이름 : " << m_Name << " 나이 : " << m_Age << endl;
	}
};

void main()
{
	Person Boy("강감찬", 22);

	Person Young = Boy;

	Young.PrintPerson();
	
	cin.get();
}

//정상종료 시 에러남(없는 메모리를 또 삭제할려고 해서) - 복사생성자 사용 시 사라짐
class Person
{
private:
	char* m_Name;
	int   m_Age;

public:
	Person(const char* a_Name, int a_Age)
	{
		m_Name = new char[strlen(a_Name) + 1];
		strcpy(m_Name, a_Name);
		m_Age = a_Age;
	}

	//그냥 멤버 : 멤버가 Value Type으로 1:1  복사되는 것을 "얕은 복사"라 한다.
	//ex) strcpy(Young.m_Name, Boy.m_Name);
	//    Young.m_Name = Boy.m_Name;

	// Reference Type으로 복사되는 것을 "깊은 복사"라 한다.
	// Young.m_Name = Boy.m_Name; //포인터 : 포인터 복사

	Person(const Person& Other) //복사생성자
	{
		m_Name = new char[strlen(Other.m_Name) + 1];
		strcpy(m_Name, Other.m_Name);
		m_Age = Other.m_Age;
	}

	~Person()
	{
		if (m_Name != NULL)
		{
			delete[] m_Name;
			m_Name = NULL;
		}
	}
	void PrintPerson()
	{
		cout << "이름 : " << m_Name << ", 나이 : " << m_Age << endl;
	}
};

void main()
{
	Person Boy("강감찬", 22);
	Boy.PrintPerson();

	Person Young = Boy; //Person Young(Boy); // 복사생성자 호출된다.
	Young.PrintPerson();

	int abc = 11;
	int aabb(22); //int aabb = 22; <-- C++에서 변수 선언과 동시에 초기화하는 방법

	cout << abc << " : " << aabb;

	cin.get();
}