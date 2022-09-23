#include <stdio.h>
#include "220923_C++_10_ForwardDeclaration_unitInfo.h"
#include "220923_C++_11_ForwardDeclaration_hero.h"

UnitInfo::UnitInfo()
{
	m_Gold = 300;
	m_Level = 12;
	m_Exp = 1500;
}

UnitInfo::~UnitInfo()
{
}

void UnitInfo::ShowHeroHp(Hero& a_Hero)
{
	printf("HeroHp(%d)\n",a_Hero.GetHP());
}