#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SLEN 101

//구조체 파일 입출력 연습 문제

struct book
{
	char name[SLEN];
	char author[SLEN];
};

void print_books(const struct book* books, int n);
void write_books(const char* filename, const struct book* books, int n);
struct book* read_books(const char* filename, int* n_ptr);
void read_books2(const char* filename, struct book** books_dptr, int* n_ptr);

int main()
{
	int temp;
	int n = 3;

	struct book* my_books = (struct book*)malloc(sizeof(struct book) * 3);
	if (!my_books)
	{
		printf("Malloc() faild");
		exit(EXIT_FAILURE);
	}
	my_books[0] = (struct book) { "Ptr The Gerat Gatsby", "F. Scott Fitzgerald" };
	my_books[1] = (struct book) { "Ptr Hamlet", "William Shakespeare" };
	my_books[2] = (struct book) { "Ptr The Odyssey", "Homer" };

	print_books(my_books, n);

	printf("\nWriting to a file.\n");
	write_books("books.txt", my_books, n);

	free(my_books);
	n = 0;
	printf("Done.\n");

	printf("\nPress any key to read data from a file.\n\n");
	temp = _getch();

	my_books = read_books("books.txt", &n);
	//read_books2("books.txt", &my_books, &n);
	print_books(my_books, n);

	free(my_books);
	n = 0;

	return 0;
}

void print_books(const struct book* books, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("Ptr Book %d : \"%s\" written by \"%s\"\n",
			i + 1, books[i].name, books[i].author);
	}
}
void write_books(const char* filename, const struct book* books, int n)
{
	FILE* file = fopen(filename, "w");
	//FILE* file = fopen(filename, "wb");//Binary

	if (file == NULL) {
		fputs("Can't open file.", stderr);
		exit(EXIT_FAILURE);
	}

	//Text
	fprintf(file, "%d\n", n);
	for (int i = 0; i < n; ++i)
	{
		fprintf(file, "%s\n%s\n", books[i].name, books[i].author);
	}

	//Binary
	//fwrite(&n, sizeof(n), 1, file);
	//fwrite(books, sizeof(struct book), n, file);

	fclose(file);
}


struct book* read_books(const char* filename, int* n_ptr)
{
	FILE* file = fopen(filename, "r");

	if (file == NULL) {
		fputs("Can't open file.", stderr);
		exit(EXIT_FAILURE);
	}

	int flag;
	flag = fscanf(file, "%d%*c", n_ptr);
	if (flag != 1)
	{
		printf("File read failed.");
		exit(EXIT_FAILURE);
	}

	struct book* books = (struct book*)calloc(sizeof(struct book), *n_ptr);

	if (!books)
	{
		printf("Malloc() failed.");
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < *n_ptr; ++i)
	{
		flag = fscanf(file, "%[^\n]%*c%[^\n]%*c", books[i].name, books[i].author);

		if (flag != 2)
		{
			printf("File read failed");
			exit(EXIT_FAILURE);
		}
	}

	fclose(file);

	return books;
}

void read_books2(const char* filename, struct book** books_dptr, int* n_ptr)
{
	FILE* file = fopen(filename, "r");
	//FILE* file = fopen(filename, "rb");//Binary

	if (file == NULL) {
		fputs("Can't open file.", stderr);
		exit(EXIT_FAILURE);
	}

	//Text
	int flag;
	flag = fscanf(file, "%d%*c", n_ptr);
	if (flag != 1)
	{
		printf("File read failed.");
		exit(EXIT_FAILURE);
	}

	//Binary
	//fread(n_ptr, sizeof(n_ptr), 1, file);

	struct book* books = (struct book*)calloc(sizeof(struct book), *n_ptr);

	if (!books)
	{
		printf("Malloc() failed.");
		exit(EXIT_FAILURE);
	}

	//Text
	for (int i = 0; i < *n_ptr; ++i)
	{
		flag = fscanf(file, "%[^\n]%*c%[^\n]%*c", books[i].name, books[i].author);

		if (flag != 2)
		{
			printf("File read failed");
			exit(EXIT_FAILURE);
		}
	}

	//Binary
	//fread(books, sizeof(struct book), *n_ptr, file);

	fclose(file);

	*books_dptr = books;
}