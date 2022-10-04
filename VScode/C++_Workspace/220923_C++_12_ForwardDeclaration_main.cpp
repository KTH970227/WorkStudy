#include <stdio.h>
#include "220923_C++_10_ForwardDeclaration_unitInfo.cpp"
#include "220923_C++_11_ForwardDeclaration_hero.cpp"

int main()
{
	UnitInfo MyUif;
	Hero a_Hero;

	MyUif.ShowHeroHp(a_Hero);
	a_Hero.ShowUserInfo(MyUif);
}