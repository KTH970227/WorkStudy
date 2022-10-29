#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>

//복잡한 선언을 해석하는 요령

int temp(int a)
{
	return 0;
}

int (*g(int a))(int)
{
	return temp;
}

int main()
{
	int* ap[10];

	typedef int* pint;
	pint ap2[10];

	float* fp(float);

	typedef float* pfloat;
	pfloat fp2(float);

	void (*pf)(int);
	//     1           1.pointer to
	//          2      2.function with int argument
	// 3               3.returning void

	int* (*x[10])(void);
	//        1        1. array of
	//     2           2. pointer to
	//              3  3. function with int argument
	//4                4. returning potiner to int


	//int f(int)[];      //Error : return array 
	int(*f(int))[];      //OK    : return array of pointer

	//int g(int)(int);   //Error : return function
	int(*g(int))(int);   //OK    : return function of pointer

	//int a[10](int);    //Error : return fuction of array
	int* (*x2[10])(int);//OK    : return function of pointer of array

	
	// [using typedef to simplify declarations]
	typedef int FCN(int);
	typedef FCN* FCN_PTR;
	typedef FCN_PTR FCN_PTR_ARRAY[10];
	FCN_PTR_ARRAY x3;

	//Example
	int board[6][4];
	int** ptr;

	int* risks[10];
	int(*rusk)[10];

	int* off[3][4];
	int(*uff)[3][4];
	int(*uof[3])[4];

	typedef int arr5[5];
	typedef arr5* p_arr5;
	typedef p_arr5 arrp10[10];

	arr5 togs;
	p_arr5 p2;
	arrp10 arp;

	return 0;
}