#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>
#include <ctype.h> //toupper(), tolower()

//함수 포인터의 사용방법

void ToUpper(char* str)
{
	while (*str)
	{
		*str = toupper(*str);
		str++;
	}
}

int ToLower(char* str)
{
	while (*str)
	{
		*str = tolower(*str);
		str++;
	}
}

void UpdataString(char* str, int(__cdecl *pf)(int))
{
	while (*str)
	{
		*str = (*pf)(*str);
		str++;
	}
}

int main()
{
	char str[] = "Hello, World!";

	void (*pf)(char*);

	pf = ToUpper;
	//pf = &ToUpper;
	//pf = ToUpper(str);

	printf("String literal %lld\n", (long long)("Hello, World!"));
	printf("Function pointer %lld\n", (long long)ToUpper);
	printf("Variable %lld\n", (long long)str);

	(*pf)(str);//ToUpper(str);
	//pf(str);

	printf("ToUpper %s\n", str);

	pf = ToLower;

	pf(str);

	printf("ToLower %s\n", str);


	// [Passing function pointers to functions]
	UpdataString(str, toupper);
	printf("UpdataToUpper %s\n", str);

	UpdataString(str, tolower);
	printf("UpdataTolower %s\n", str);

	return 0;
}