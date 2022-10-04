#include <stdio.h>
#include <vector>
using namespace std;
#pragma warning (disable: 4996)

class Student
{
public:   //<--- 접근지정자
	char m_Name[128] = { 0 };  //<-- 맴버변수
	int m_Kor = 0;
	int m_Eng = 0;
	int m_Math = 0;

private:	//<--- 접근지정자 (외부 사용 불가)
	int m_Total = 0;
	float m_Avg = 0.0f;

public:
	Student() //<-- 생성자함수 : 리턴형도 없고 클래스 이름과 같은 이름의 함수
	{ //객체 생성시에 한번 처음으로 호출되는 함수로 주로 맴버 변수 초기화를 위해서 사용
	}

	~Student()  //<-- 소멸자함수 : 객체 소멸시 한번 자동으로 호출되는 함수
	{ //동적할당된 맴버변수의 메모리를 삭제할 때 사용된다.
	}
	//생성자와 소멸자는 생략 가능하고 생략하더라도 내부적으로 디폴트생성자, 디폴트소멸자 함수가
	//자동으로 호출된다.

public:
	void CacJumsu(); //<-- 맴버함수의 선언
	void PrintInfo() //<-- 맴버함수의 정의(선언의 역할까지 같이 함)
	{
		printf("이름(%s) 국어(%d) 영어(%d) 수학(%d) 총점(%d) 평균(%.2f)\n", 
			m_Name, m_Kor, m_Eng, m_Math, m_Total, m_Avg);
	}
};

void Student::CacJumsu() //<-- 맴버함수의 정의
{
	m_Total = m_Kor + m_Eng + m_Math;
	m_Avg = m_Total / 3.0f;
}

// 접근지정자
// public : 내부, 외부 모두 사용 가능
// private : 내부에서만 사용 가능
// protected : 내부에서만 사용 가능 단, 상속관계에 있는 파생 클래스에서는 사용 허용
// 구조체는 기본 접근 지정자가 public 이고
// 클래스는 기본 접근 지정자가 private 이다.

void main()
{
	Student AAA;
	strcpy(AAA.m_Name, "강아지");
	AAA.m_Kor = 23;
	AAA.m_Eng = 34;
	AAA.m_Math = 45;
	AAA.CacJumsu();
	AAA.PrintInfo();

	getchar();
}