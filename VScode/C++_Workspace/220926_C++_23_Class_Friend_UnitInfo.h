#pragma once

class UnitInfo
{
    //프랜드 글로벌 함수 : 글로벌 함수에게 private나 protected 변수에 접근할 수 있는 권한을 주는 키워드이다.
    friend void PrintUnitInfo(UnitInfo& a_Uif);

    //프랜드 클래스 : 다른 클래스가 이 클래스의 private나 protected 변수에 접근할 수 있는 권한을 주는 키워드이다. 
    friend class HeroInfo;

private:
    int m_Gold  = 0;
    int m_Level = 0;
    int m_Exp   = 0;

public:
    UnitInfo();
    ~UnitInfo();
};