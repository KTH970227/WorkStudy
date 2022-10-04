#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;
#pragma warning(disable: 4996)
#include <algorithm>

struct Item
{
	char m_Name[128];
	int  m_Level;

	//void PrintInfo()  //C++문법에서는 구조체 안에 맴버 함수를 만들 수 있다.
	//{
	//	cout << m_Name << " : " << m_Level << endl;
	//}
};

class Student
{
public:
	char m_Name[128] = { '\0' }; //<-- 맴버변수
	int  m_Kor  = 0;
	int  m_Eng  = 0;
	int  m_Math = 0;

	int   m_Total = 0;
private:
	float m_Avg = 0.0f;

public:
	Student()  //<-- 생성자함수 : 리턴형도 없고 클래스 이름과 같은 이름의 함수
	{ //객체 생성시에 한번 자동으로 호출되는 함수로 주로 맴버 변수 초기화를 위해서 사용
		//m_Name[0] = '\0';
		//m_Kor = 0;
		//m_Eng = 0;
		//m_Math = 0;
		//m_Total = 0;
		//m_Avg = 0.0f;
	}

	~Student() //<-- 소멸자함수 : 객체 소멸시 한번 자동으로 호출되는 함수
	{ //동적할당된 맴버변수의 메모리를 삭제할 때 사용된다.

	}
	//생성자와 소멸자는 생략 가능하고 생략하더라도 내부적으로 디폴트생성자, 디폴트소멸자
	//함수가 자동으로 호출된다.

public:
	void CacJumsu();		//<-- 맴버함수(클래스 맴버함수의 선언)
	void PrintInfo()
	{
		//cout    << "이름(" << m_Name << ") "
		//		<< "국어(" << m_Kor << ") "
		//		<< "영어(" << m_Eng << ") "
		//		<< "수학(" << m_Math << ") "
		//		<< "총점(" << m_Total << ") "
		//		<< "평균(" << m_Avg << ") "
		//		<< endl;

		printf("이름(%s) 국어(%d) 영어(%d) 수학(%d) 총점(%d) 평균(%.2f)\n", 
				m_Name, m_Kor, m_Eng, m_Math, m_Total, m_Avg);
	}
};

void Student::CacJumsu()	//<-- 클래스 맴버 함수의 정의
{
	m_Total = m_Kor + m_Eng + m_Math;
	m_Avg = m_Total / 3.0f;
}

// 접근지정자 
// public : 내부, 외부 모두 사용 가능
// private : 내부에서만 사용 가능
// protected : 내부에서만 사용 가능 단, 상속관계에 있는 파생 클래스에서는 사용 가능
// 구조체는 기본 접근 지정자가 public 이고
// 클래스는 기본 접근 지정자가 private 이다. 

//정렬 조건 함수
bool MySort(const Student& a, const Student& b)
{
	//return a.m_Kor < b.m_Kor;  //오름차순 정렬(국어점수가 작은값에서 큰값으로 정렬)
	return a.m_Total > b.m_Total; //내림차순 정렬(큰값에서 작은값으로 정렬)
}

void AddStudent(vector<Student>* a_StList)
{
	Student a_TempSt;

	cout << a_StList->size() + 1 << "번 학생 이름을 입력해 주세요 : ";
	cin >> a_TempSt.m_Name;
	getchar();

	cout << "국어점수 : ";
	cin >> a_TempSt.m_Kor;
	getchar();

	cout << "영어점수 : ";
	cin >> a_TempSt.m_Eng;
	getchar();

	cout << "수학점수 : ";
	cin >> a_TempSt.m_Math;
	getchar();

	a_TempSt.CacJumsu();

	a_StList->push_back(a_TempSt);

	//(*a_StList).push_back(a_TempSt);
}

void PrintList(vector<Student>* a_StList)
{
	cout << endl << "<학생 리스트>" << endl;
	for (int ii = 0; ii < a_StList->size(); ii++)
	{
		cout << ii + 1 << "번 : ";
		(*a_StList)[ii].PrintInfo();
	}

	cout << endl;
}

void SortList(vector<Student>* a_StList)
{
	sort(a_StList->begin(), a_StList->end(), MySort); //#include <algorithm>
}

void DelStudent(vector<Student>* a_StList)
{
	cout << "삭제할 학생 번호를 입력해 주세요 : ";

	int a_DInx = -1;
	cin >> a_DInx;
	getchar();

	a_DInx--;

	if (0 <= a_DInx && a_DInx < a_StList->size())
	{
		a_StList->erase(a_StList->begin() + a_DInx);

		cout << "<학생 삭제 결과 학인>";
		PrintList(a_StList);
	}
	else
	{
		cout << "해당하는 번호의 학생이 없습니다." << endl;
	}
}

//Student a_AAA;
//strcpy(a_AAA.m_Name, "강아지");
//a_AAA.m_Kor = 20;

void main()
{
	vector<Student> m_StList;

	while(true)
	{
		cout << "1, 추가  2, 총점순정렬  3, 학생삭제  999, 프로그램종료 : ";

		int a_Sel = 0;
		cin >> a_Sel;
		getchar();

		if (a_Sel < 1 || 3 < a_Sel)
		{
			if (a_Sel == 999)
				break;

			system("cls");
			continue;
		}//if (a_Sel < 1 || 3 < a_Sel)

		if (a_Sel == 1) //<--1, 학생추가
		{
			AddStudent(&m_StList);
			PrintList(&m_StList);
		}//if (a_Sel == 1) //<--1, 학생추가
		else if (a_Sel == 2)  //<--2, 총점순 정렬
		{
			SortList(&m_StList);
			PrintList(&m_StList);
		}//<--2, 총점순 정렬
		else if (a_Sel == 3)  //<-- 3, 학생삭제
		{
			PrintList(&m_StList);
			DelStudent(&m_StList);

		}//<-- 3, 학생삭제

		cout << "Enter 입력시 프로그램 계속 진행...";
		getchar();
		system("cls");

	}//while(true)

	m_StList.clear();		//전체 노드 삭제
}