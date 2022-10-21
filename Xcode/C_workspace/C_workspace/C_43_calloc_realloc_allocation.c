#include <stdio.h>
#include <stdlib.h>

//calloc(), realloc() 함수는 무엇인가?

int main()
{
	int n = 10;

	int* ptr = NULL;

	//ptr = (int*)malloc(n * sizeof(int);
	ptr = (int*)calloc(n, sizeof(int)); //contiguous allocation


	if (!ptr)
		exit(1);

	for (int i = 0; i < n; i++)
		printf("%d ", ptr[i]);
	printf("\n");

	//realloc()

	for (int i = 0; i < n; ++i)
		ptr[i] = i + 1;

	n = 20;

	int* ptr2 = NULL;
	ptr2 = (int*)realloc(ptr, n * sizeof(int));
	//ptr = (int*)realloc(ptr, n * sizeof(int));

	printf("%p %p\n", ptr, ptr2);

	printf("%d\n", ptr[0]);

	if (!ptr2)
		exit(1);
	else
		ptr2 = NULL;

	for (int i = 0; i < n; ++i)
		printf("%d\n", ptr2[i]); //copies data

	return 0;
}