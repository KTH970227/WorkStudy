#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

// class의 연산자 오버로딩
// 맴버 연산자 오버로딩, 전역 연산자 오버로딩
// 연산자 오버로딩을 사용하는 대표적인 예) STL string 클래스

class Time
{
	friend const Time operator+(const int s, const Time& T);
	friend const Time operator+(const Time& T, const int s);

private:
	int hour, min, sec;

public:
	Time()
	{
	}

	Time(int h, int m, int s)
	{
		hour = h;
		min = m;
		sec = s;
	}

	void AddSec(int a_sec)
	{
		sec += a_sec;
		min += sec / 60;
		sec %= 60;
		hour += min / 60;
		min %= 60;
	}

//	const Time operator+(int s) const; //맴버 연산자 오버로딩 함수 선언

	void OutTime()
	{
		cout << hour << " : " << min << " : " << sec << endl;
	}
};

//const Time Time::operator+(int s) const //맴버 연산자 오버로딩 함수 정의
//{
//	Time R = *this;
//	R.sec += s;
//	R.min += R.sec / 60;
//	R.sec %= 60;
//	R.hour += R.min / 60;
//	R.min %= 60;
//
//	return R;
//}

//------ 전역 연산자 오버로딩 함수 정의
const Time operator+(const int s, const Time& T)
{
	Time R = T;
	R.sec += s;
	R.min += R.sec / 60;
	R.sec %= 60;
	R.hour += R.min / 60;
	R.min %= 60;

	return R;
}

const Time operator+(const Time& T, const int s)
{
	Time R = T;
	R.sec += s;
	R.min += R.sec / 60;
	R.sec %= 60;
	R.hour += R.min / 60;
	R.min %= 60;

	return R;
}
//------ 전역 연산자 오버로딩 함수 정의

void main()
{
	Time AA(1, 55, 52);
	//AA.AddSec(40);
	//AA = AA + 40;  //<-- AA.operator+(40);
	AA.OutTime();

	//AA = 40 + AA;  //40.operator+(AA); 
	Time CC = 40 + AA; //<-- Time CC = operator+(40, AA);
	CC.OutTime();
	CC = CC + 100;	   //<-- CC = operator+(CC, 100);
	CC.OutTime();

	string MyStr = "반가워요";
	string Test01 = MyStr + "서울";
	string Test02 = "서울" + MyStr;
	cout << Test01 << " : " << Test02 << endl;

	cin.get();
}