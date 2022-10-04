#pragma once
//#include "UnitInfo.h" //가능하면 헤더파일에 include를 안하는게 좋고 될 수 있으면 cpp쪽에 include 하는 것이 좋다.
//UnitInfo g_Uif; <-- 이런식으로 변수선언시에는 include를 해야 하겠지만

//단순히 함수의 인자의 데이터형으로 사용될 될 경우에는 아래처럼 class가 설계되어 있는 것처럼 속이는게 좋다.
class UnitInfo;

void PrintUnitInfo(class UnitInfo& a_Uif); //<<-- 전방선언