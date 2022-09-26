#include <stdio.h>
#include "220926_C++_23_Class_Friend_GlobalValue.h"
#include "220926_C++_23_Class_Friend_UnitInfo.h"

void PrintUnitInfo(UnitInfo& a_Uif) 
{
    //friend void PrintUnitInfo(UnitInfo& a_Uif); 로 클래스 내부에 등록시켜 주어서...
    //접근 권한이 주어졌기 때문에 UnitInfo 클래스 private에 접근할 수 있게 되었다.
    printf("Gold(%d) Level(%d) Exp(%d)\n", a_Uif.m_Gold, a_Uif.m_Level, a_Uif.m_Exp);
}