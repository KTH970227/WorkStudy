#pragma once
//#include "UnitInfo.h" //가능하면 헤더파일에 include를 안하는게 좋고 될 수 있으면 cpp쪽에 include를 하는 게 좋다.
//UnitInfo a_Uit; //정적할당 변수선언 시에는 include를 할 수 밖에 없지만.
//단순히 함수의 인자로 사용되거나. 포인터나 참조형 데이터형으로 변수 선언의 사용될 경우에는 
//class가 설계되어 있는 것처럼 속이는게 좋다.

class UnitInfo; //<--- 전방선언

class Hero
{
private:
	int m_Hp = 0;

public:
	Hero();
	~Hero();

public:
	void ShowUserInfo(UnitInfo& a_Uif);
	int GetHP();
};