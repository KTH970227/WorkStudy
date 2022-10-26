#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>
#include <string.h>
#define MAX_TITLE 40
#define MAX_AUTHOR 40
#define MAX_BOOKS 3

//구조체 배열 연습 문제

char* s_gets(char* st, int n)
{
	char* ret_val;
	char* find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return ret_val;
}

struct book
{
	char title[MAX_TITLE];
	char author[MAX_AUTHOR];
	float price;
};

int main()
{
	struct book libary[MAX_BOOKS] = { {"Empty", "Empty", 0.0f}, };

	int count = 0;

	while (1)
	{
		printf("Input a book title or press [ENTER] to stop.\n>>");
		if (s_gets(libary[count].title, MAX_TITLE) == NULL) break;
		if (libary[count].title[0] == '\0') break;

		printf("Input the author.\n>>");
		s_gets(libary[count].author, MAX_AUTHOR);

		printf("Input the price.\n>>");
		int flag = scanf("%f", &libary[count].price);
		while (getchar() != '\n')
			continue;

		count++;

		if (count == MAX_BOOKS)
		{
			printf("No more books.\n");
			break;
		}
	}

	if (count > 0)
	{
		printf("\nThe list of books : \n");
		for (int index = 0; index < count; index++)
		{
			printf("\"%s\" written by %s: $%.1f\n",
				libary[index].title, libary[index].author, libary[index].price);
		}
	}
	else
	{
		printf("No books to show.\n");
	}

	return 0;
}