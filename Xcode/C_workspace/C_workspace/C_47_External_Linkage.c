#define _CRT_SECURE_NO_WARRINGS
#include <stdio.h>

//정적 변수의 외부 연결(external linkage)
//Static variable with external linkage

int g_int = 0;				   //int g_int;
double g_arr[1000] = { 0.0, }; //double g_arr[1000];

//Initializing External Variables
int x = 5;                  //ok, constant expression
int y = 1 + 2;              //ok, constant expression
size_t z = sizeof(int);     //ok, constant expression
//int x2 = 2 * x;           //not ok, x is a variable

void func()
{
	printf("g_int in fun() %d %p\n", g_int, &g_int);
	g_int += 10;
}

void fun_sec(); //C_47_Second.c

int main()
{
	//defining declaration vs referencing declaration

	extern int g_int;          //Optional
	//extern int g_int = 1024; //Error in block scope

	//int g_int = 123;         //higes global g_int

	extern double g_arr[];     //Optional, size is not necessary

	printf("g_int in main() %d %p\n", g_int, &g_int);
	g_int += 1;

	func();
	fun_sec();

	return 0;
}