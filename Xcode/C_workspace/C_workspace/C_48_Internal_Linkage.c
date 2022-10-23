#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>

//정적 변수의 내부 연결 Internal Linkage
//Static variable with Internal linkage

int g_int = 123;          //defining declaration
//static int g_int = 123; //defining declaration
//static 으로 권한을 막을 수 있다.

void fun();
void fun_second();
void fun_third();

int main()
{
	fun();
	fun_second();
	fun_third();

	return 0;
}

void fun()
{
	extern int g_int; //Optional


	printf("g_int in fun() % d % p\n", g_int, &g_int);
}