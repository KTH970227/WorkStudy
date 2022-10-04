#include <stdio.h>
#include <iostream>
//#include <windows.h>

using namespace std;

// 템플릿 클래스
// 컴파일시에 사용된 T 데이터형에 따라서 클래스가 만들어 진다.(붕어빵 틀에서 붕어빵을 찍어내듯이...)
// 템플릿은 내부적으로 에러가 있어도 비주얼스튜디오 툴에서 에러를 표시해 주지 않고 컴파일시에
// 에러 메시지를 띄워준다.

void gotoxy(int x, int y)
{
	//COORD Pos = { x, y };
	//SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

template <typename T>
class PosValue
{
private:
	int x, y;
	T value;

public:
	PosValue();
	PosValue(int ax, int ay, T av) : x(ax), y(ay), value(av)
	{ //생성자 오버로딩 함수 맴버 초기화 리스트 사용 
	}
	~PosValue();

	void SetPos(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	void SetValue(T val)
	{
		value = val;
	}

	void OutValue();
};

template<typename T>
PosValue<T>::PosValue()  //템플릿 클래스의 디폴트 생성자 함수의 정의
{
}

template<typename T>
PosValue<T>::~PosValue()  //템플릿 클래스의 디폴트 생성자 함수의 정의
{
}

template<typename T>
void PosValue<T>::OutValue()  //템플릿 클래스의 디폴트 생성자 함수의 정의
{
	gotoxy(x, y);
	cout << value << endl;
}

void main()
{
	PosValue<int> iv(1, 1, 2);
	iv.OutValue();

	PosValue<char> cv(5, 5, 'c');
	cv.OutValue();

	PosValue<float> fv;
	fv.SetPos(20, 10);
	fv.SetValue(3.14f);
	fv.OutValue();

	cin.get();
}