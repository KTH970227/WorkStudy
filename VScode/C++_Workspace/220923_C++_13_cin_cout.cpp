#include<stdio.h>
#include<iostream>
using namespace std;

//C++에서의 입출력 키워드 
//C언어 printf : C++ cout
//C언어 scanf : C++ cin

void main()
{
	cout << "반가워요." << endl; //endl:줄바꿈기호(= \n)
	cout << "서울" << endl;
	cout << "정수 : " << 1234 << ", 실수 : " << 4567.8f << endl;

	int abc = 7890;
	cout << "abc = " << abc << endl;

	cout << "정수값 하나를 입력해 주세요 : ";
	int ii = 0;
	cin >> ii;
	getchar();

	cout << "ii의 값은 : " << ii << endl;

	getchar();
}