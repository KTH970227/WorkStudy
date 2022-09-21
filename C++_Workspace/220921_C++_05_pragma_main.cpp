#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable: 4996)

#include "220921_C++_05_pragma.h"
#include "220921_C++_05_pragma_GlobalValue.h"

//18-3, pragma 지시자
//#pragma 지시자는 컴파일러에게 지시 사항을 전달하는 명령어이다.

//#pragma warning(disable: 4996) //<--- 4996 경고제어문 고유번호
//경고는 경우에 따라 참고만 하고 무시해도 상관없는 것들이 있다.
//그러한 경고 문구를 무시할 때 사용하는 키워드
//해당 경고(에러)를 무시하라는 뜻으로 사용됨

//#pragma once
//이 지시자를 헤더 파일 선두에 써 두면 컴파일러는 딱 한번만 헤더 파일을 포함하여 컴파일 한다.

//#pragma comment(lib, "d3d11.lib") //<-- 라이브러리는 Visual Studio 옵션 창에서
//추가하는 방법도 있지만 이렇게 추가해도 된다.
//#include <d3d11.h>

void main()
{
    MyValue AAA = MyValue::One;
    g_Value.m_Value = 123;

    printf("%d\n", g_Value.m_Value);

    getchar();
}