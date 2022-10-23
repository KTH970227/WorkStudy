#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>

extern int g_int; //referencing decalaration
//int g_int;

void fun_second(void)
{
	g_int += 1;
	printf("g_int in fun_second() %d %p\n", g_int, &g_int);
}