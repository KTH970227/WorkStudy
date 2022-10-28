#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>
#include <stdlib.h>
#define SLEN 101

//구조체의 배열을 사용하는 함수

struct book
{
	char name[SLEN];
	char author[SLEN];
};

void print_books(const struct book books[], int n);
void print_books_ptr(const struct book *books, int n);

int main()
{
	struct book my_books[3];
	my_books[0] = (struct book){ "The Gerat Gatsby", "F. Scott Fitzgerald" };
	my_books[1] = (struct book){ "Hamlet", "William Shakespeare" };
	my_books[2] = (struct book){ "The Odyssey", "Homer" };

	print_books(my_books, 3);


	struct book* my_books2 = (struct book*)malloc(sizeof(struct book) * 3);
	if (!my_books2)
	{
		printf("Malloc() faild");
		exit(EXIT_FAILURE);
	}
	my_books2[0] = (struct book){ "Ptr The Gerat Gatsby", "F. Scott Fitzgerald" };
	my_books2[1] = (struct book){ "Ptr Hamlet", "William Shakespeare" };
	my_books2[2] = (struct book){ "Ptr The Odyssey", "Homer" };

	print_books_ptr(my_books2, 3);
	free(my_books2);

	return 0;
}

void print_books(const struct book books[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("Book %d : \"%s\" written by \"%s\"\n", 
			i + 1, books[i].name, books[i].author);
	}
}

void print_books_ptr(const struct book *books, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("Ptr Book %d : \"%s\" written by \"%s\"\n",
			i + 1, books[i].name, books[i].author);
	}
}