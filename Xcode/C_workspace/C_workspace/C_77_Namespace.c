#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>

//이름공간 공유하기

int iamfunction()
{
	return 0;
}

//int a = 123; //Namespace pollution

int main()
{
	{
		int myname = 345;
		//double myname = 3.14; //Error
	}

	struct rect { double x; double y; };

	//int rect = 123;
	struct rect rect = { 1.1, 2.2 };

	typedef struct rect rect;
	//rect rect = { 1.1, 2.2 }; //Not Ok

	//int iamfunction = iamfunction(); //Error


	// [Namespace pollution]
	//prtintf("%d\n", a); //other.c

	return 0;
}