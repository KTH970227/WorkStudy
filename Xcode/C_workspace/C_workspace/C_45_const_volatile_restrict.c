#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include "C_45_constants.h"

//자료형한정자
//	-const
//	-volatile
//	-restrict

//const double PI = 3.141592;
//const double gravity = 9.8f;

int main()
{
	//<Global contants>
	double area_circle = PI * 2.0f; 2.0f;

	//<const>
	const const const int n = 6; //const int n = 6;

	typedef const int zip;
	const zip q = 8; //const const int zip

	//const int i; // NOT initialized;
	//i = 12; //ERROR
	//printf("%d\n", i); //ERROR

	const int j = 123;
	const int arr[] = { 1, 2, 3 };

	float f1 = 3.14f, f2 = 1.2f;


	//1.
	const float* pf1 = &f1;
	//*pf1 = 5.0f; //ERROR
	pf1 = &f2;     //Allowed
	
	//2.
	float* const pf2 = &f1;
	*pf2 = 6.0f;  //Allowed
	//pt2 = %f2;  //ERROR

	//3.
	const float* const pf3 = &f1;
	//*pf3 = 7.0f; //ERROR
	//pf3 = &pf2;  //ERROR


	//<volatile>
	volatile int vi = 1;     // volatile location
	volatile int* pvi = &vi; // points to a volatile location

	int i1 = vi;

	//...

	int i2 = vi;


	//<restrict>
	int ar[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* par = ar;

	int* __restrict restar = (int*)malloc(10 * sizeof(int));
	if (!restar) exit(EXIT_FAILURE);

	ar[0] += 3;
	ar[1] += 5;
	//par[0] += 8;

	restar[0] += 3;
	restar[0] += 5;
	//restr[0] += 8; //Equalivalent

	free(restar);

	return 0;
}
