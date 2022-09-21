#include <stdio.h>
#include <iostream>
using namespace std;

//13-1-다 구조체 정렬

struct Student
{
	char m_Nick;
	int  m_Kor;
	int  m_Eng;
	int  m_Math;
};

void main()
{
	int abc = 0;
	char ccc = 0;
	cout << sizeof(int) << " : " << sizeof(char) << endl;

	cout << sizeof(Student) << endl;

	cin.get();
}