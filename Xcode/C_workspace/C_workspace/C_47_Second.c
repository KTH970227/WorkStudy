#define _CRT_SECURE_NO_WARRINGS
#include <stdio.h>

//extern int g_int;  //1.
//extern int g_int = 777; //Success
// *한곳만 초기화해야 함

void temp()
{
	extern int g_int; //2.
	//extern int g_int = 777; //ERROR
	//block scope에선 초기화 불가능

	g_int += 1000;
}

void fun_sec(void)
{
	temp();

	extern int g_int; //2.
	//extern int g_int = 777; //ERROR
	//block scope에선 초기화 불가능

	g_int += 7;
	printf("g_int in fun_sec() %d %p\n", g_int, &g_int);
}