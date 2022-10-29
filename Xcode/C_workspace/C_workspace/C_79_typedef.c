#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>
#include <time.h> //time()

//자료형에게 별명을 붙여주는 typedef

// [Complicated Function Declarations]
char char3[3] = { 'A', 'B', 'C' };

char(*complicated_function1())[3]
{
	return &char3;
}

typedef char(*FRPTC3())[3];
typedef char(*(*PRFRPTC3)())[3];

char(*(*fptr1)())[3] = complicated_function1;

FRPTC3* fptr2 = complicated_function1;
PRFRPTC3 fptr3 = complicated_function1;


//[Use typedef to make declarations simpler]
typedef char c3[3];

c3* complicated_function2()
{
	return &char3;
}

int main()
{
	// [typedef specifier]
	typedef unsigned char BYTE;

	BYTE x, y[10] = { 0, }, *z = &x;

	{
		typedef unsigned char byte;

		// [Portable data types]
		size_t s = sizeof(byte);//unsigned int (x86), unsigned long long (x64)
		//unsigned int s = sizeof(byte); //x86
		//unsigned long long s = sizeof(byte); //x64
	}
	//byte b; //Error


	// [Time Function] //time.h
	time_t t = time(NULL);
	printf("%lld\n", t);


	// [typedef vs #define]
	typedef char* STRING;
	STRING name = "John Wick", sign = "World";


	// [typedef struct complex COMPLEX]
	typedef struct complex {
		float real;
		float imag;
	} COMPLEX;

	typedef struct { double width; double height; } rect;
	rect r1 = { 1.1, 2.2 };
	rect r2 = r1;
	printf("%f %f\n", r2.width, r2.height);


	// [Complicated Function Declarations]
	char(*ret_val)[3] = fptr1();
	printf("%c %c %c\n", (*ret_val)[0], (*ret_val)[1], (*ret_val)[2]);

	//[Use typedef to make declarations simpler]
	c3* my_c3 = fptr2();
	printf("%c %c %c\n", (*my_c3)[0], (*my_c3)[1], (*my_c3)[2]);

	return 0;
}