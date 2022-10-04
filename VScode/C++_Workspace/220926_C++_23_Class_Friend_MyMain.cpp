#include <stdio.h>
#include "220926_C++_23_Class_Friend_UnitInfo.cpp"
#include "220926_C++_23_Class_Friend_HeroInfo.cpp"
#include "220926_C++_23_Class_Friend_GlobalValue.cpp"

// friend 키워드
// friend : 글로벌 함수나 다른 클래스에게 private, protected 변수에 접근할 수 있는 권한을 주는 키워드.

int main()
{
    UnitInfo MyUif;
    PrintUnitInfo(MyUif);

    HeroInfo a_Hero;
    a_Hero.ShowUnitInfo(MyUif);

    getchar();
}