#include <stdio.h>
#include "220923_C++_11_ForwardDeclaration_hero.h"
#include "220923_C++_10_ForwardDeclaration_unitInfo.h"


Hero::Hero()
{
	m_Hp = 200;
}

Hero::~Hero()
{
}

void Hero::ShowUserInfo(UnitInfo& a_Uif)
{
	printf("HP(%d)\n", m_Hp);
	printf("Gold(%d) Level(%d) Exp(%d)\n", a_Uif.m_Gold, a_Uif.m_Level, a_Uif.m_Exp);
}

int Hero::GetHP()
{
	return m_Hp;
}