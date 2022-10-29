#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>
#include <stdlib.h>

//qsort() 함수 포인터 연습문제

int compare(const void* first, const void* second)
{
	if (*(int*)first > * (int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

//ex) 1
struct kid
{
	char name[100];
	int height;
};

int compare2(const void* first, const void* second);

int main()
{
	int arr[] = { 8, 2, 5, 3, 6, 11 };
	int n = sizeof(arr) / sizeof(arr[0]);

	qsort(arr, n, sizeof(int), compare);

	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);


	//ex) 1
	struct kid my_friends[] = {
		"Jack", 40, "Geenie", 300, "Aladdin", 170, "Piona", 150 };

	const int n = sizeof(my_friends) / sizeof(my_friends[0]);

	qsort(my_friends, n, sizeof(struct kid), compare2);

	for (int i = 0; i < n; i++)
		printf("%s      \t%d\n ", my_friends->name, my_friends->height);

	return 0;
}

int compare2(const void* first, const void* second)
{
	if (((struct kid*)first)->height < ((struct kid*)second)->height)
		return 1;
	else if (((struct kid*)first)->height > ((struct kid*)second)->height)
		return -1;
	else
		return 0;
}