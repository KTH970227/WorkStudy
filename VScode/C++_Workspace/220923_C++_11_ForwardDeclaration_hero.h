#pragma once

class Hero;

class UnitInfo
{
public:
	int m_Gold = 0;
	int m_Level = 0;
	int m_Exp = 0;

public:
	UnitInfo();
	~UnitInfo();

	void ShowHeroHp(Hero& a_Hero);
};