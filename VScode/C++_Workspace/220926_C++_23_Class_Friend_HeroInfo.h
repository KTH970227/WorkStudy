#pragma once

class UnitInfo;

class HeroInfo
{
private:
    int m_Hp = 0;

public:
    HeroInfo();
    ~HeroInfo();

public:
    void ShowUnitInfo(UnitInfo& a_Uif);

    void ShowInfo();
    void CalcHap();
};