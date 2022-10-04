#include <stdio.h>
#include <string.h>
#include <iostream>
#pragma warning(disable: 4996)

using namespace std;

//클래스 객체 포함

class Unit
{
public:
	char m_FileName[128];
	int  x, y, z;
	int  rotX, rotY, rotZ;
	int  scX, scY, scZ;
};

class UserData
{
public:
	char m_NickName[128];
	int  m_Hp;
	int  m_Mp;

public:
	UserData(const char* a_Nick = NULL, int a_Hp = 0, int a_Mp = 0)
	{
		strcpy(m_NickName, a_Nick);
		m_Hp = a_Hp;
		m_Mp = a_Mp;
	}
};

class PC : public Unit
{
	UserData m_UData;	//<-- 객체 포함
};

//상속의 장점 : 다형성을 사용할 수 있다.
//다형성을 사용해야 할 필요성이 있는 경우 상속을 사용해야 한다.

//객체 포함의 장점 : 포함의 경우, 클래스를 다른 의미의 변수들로 여러번 포함 시킬 수 있다.

//상속과 포함을 사용하는 기준 판단
//말을 만들어 보고 직감으로 판단한다.
//새우깡이 유통기한이다.(이상하다.) 새우깡에 유통기한이 포함된다.(말이된다. 포함)
//코끼리는 동물이다.(말이되니까 상속)

class Date
{
public:
	int year, month, day;

public:
	Date(int y = 0, int m = 0, int d = 0)
	{
		year	= y;
		month	= m;
		day		= d;
	}

	void OutDate()
	{
		cout << year << ", " << month << ", " << day << endl;
	}
};

class Product : public UserData
{
public:
	char Name[64];		//제품명
	char Company[32];	//제조회사
	Date ManuFact;		//제조일자
	Date ValidTo;		//유통기한
	int  Price;			//가격

public:
	Product(const char* aN = NULL, const char* aC = NULL,
			int sy = 0, int sm = 0, int sd = 0,
			int y = 0, int m = 0, int d = 0, int aP = 0)
			: UserData("아기상어", 100, 50), ManuFact(sy, sm, sd), ValidTo(y, m, d)
	{	//클래스 객체를 포함으로 구현한 경우 변수명(객체명)으로 초기화...
		strcpy(Name, aN);
		strcpy(Company, aC);
		Price = aP;
	}

	void OutProduct()	//제품 정보를 출력해 주는 함수
	{
		cout << "이름 : " << Name << endl;
		cout << "제조사 : " << Company << endl;
		cout << "제조일자 : ";
		ManuFact.OutDate();
		cout << "유통기한 : ";
		ValidTo.OutDate();
		cout << "가격 : " << Price;
	}
};

void main()
{
	Product a_Pro("새우깡", "농심", 2021, 6, 10, 2021, 6, 20, 1200);
	a_Pro.OutProduct();

	a_Pro.ValidTo.year = 2021; //포함인 경우 여러댑스를 통해 맴버변수를 접근하게 되는 단점
	a_Pro.ValidTo.month = 11;
	a_Pro.ValidTo.day = 25;

	a_Pro.m_Hp = 200;		//상속인 경우, .으로 바로 접근할 수 있게 된다.
	a_Pro.m_Mp = 120;

	cin.get();
}