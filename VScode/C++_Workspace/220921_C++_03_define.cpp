#include <stdio.h>
#include <iostream>
using namespace std;

// 조건부 컴파일
#define KOREA
//#define ENGLISH
//#define CHINA

void main()
{
	int ii = 10;

#ifdef KOREA
	ii = ii + 10;
	ii = ii * 12;
	ii -= 11;
#endif

	cout << "ii : " << ii << endl;

#ifdef KOREA
	cout << "이것은 한글버전입니다." << endl;
#endif

#ifdef ENGLISH
	cout << "This is English." << endl;
#endif

#ifdef CHINA
	cout << "이것은 중국어 버전입니다." << endl;
#endif

	int a_xx = 111;
#ifdef _DEBUG
	cout << "_Debug 모드일 때만 테스트로 출력해 줘 " << a_xx << endl;
#endif

	cin.get();
}