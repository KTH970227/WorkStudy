#include "220926_C++_23_Class_Friend_HeroInfo.h"
#include "220926_C++_23_Class_Friend_UnitInfo.h"
#include <stdio.h>

HeroInfo::HeroInfo()
{
    m_Hp = 200;
}

HeroInfo::~HeroInfo()
{
}

void HeroInfo::ShowUnitInfo(UnitInfo& a_Uif)
{
    printf("HP(%d)\n", m_Hp);
    //friend class HeroInfo; //<---
    //접근 권한이 주어졌기 때문에 UnitInfo 클래스 private에 접근할 수 있게 되었다.
    printf("Gold(%d) Level(%d) Exp(%d)\n", a_Uif.m_Gold, a_Uif.m_Level, a_Uif.m_Exp);
}

void HeroInfo::ShowInfo()
{
    printf("Hp(%d)\n", m_Hp);
}

void HeroInfo::CalcHap()
{

}