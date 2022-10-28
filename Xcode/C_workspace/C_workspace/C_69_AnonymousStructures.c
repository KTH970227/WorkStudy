#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>

//익명 구조체

struct names
{
	char first[20];
	char last[20];
};

struct person
{
	int id;
	struct names name; //nested structure member
};

struct person2
{
	int id;
	struct { char first[20]; char last[20]; }; //anonymous structure
};

int main()
{
	struct person ted = { 123, { "Bill", "Gates"} };
	struct person ted3 = { 123, "Robert", "Hand" };

	puts(ted.name.first);
	pust(ted3.name.first);

	struct person2 ted2 = { 123, {"Steve", "wozniak"} };
	//struct person2 ted2 = { 123, "Steve", "wozniak" };
	puts(ted2.id);
	puts(ted2.first);

	return 0;
}