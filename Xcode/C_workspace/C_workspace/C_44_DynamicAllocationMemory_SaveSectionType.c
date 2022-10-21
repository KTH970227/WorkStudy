#include <stdio.h>
#include <stdlib.h>

//���� �Ҵ� �޸𸮿� ������� �з�
//����� �μ��� ȯ�溯����(Command-line arguments and environment variables)
//	-����(Stack)
//	-��������(Free)
//	-��(Heap)
//	-�ʱ�ȭ���� ���� ����,���� ������(BSS(Block Started by Symbol) Segment)
//	-�ʱ�ȭ�� ����,���� ������(DATA Segment)
//	-���α׷� �ڵ�[�б�����](TEXT Segment)


int g = 123;

void Func()
{
	int i = 123;
	printf("Local variable   \t%lld\n", (long long)&i);
}

int main()
{
	const char* message = "Banana";

	void (*f_ptr)() = Func; //address of a function

	printf("Local pointer      \t%lld\n", (long long)& message);
	printf("Function pointer   \t%lld\n", (long long)& f_ptr);
	printf("String data        \t%lld\n", (long long)message);
	printf("Function address   \t%lld\n", (long long)f_ptr);
	printf("Function address   \t%lld\n", (long long)main);
	printf("Global variable    \t%lld\n", (long long)& g);

	Func();

	int* ptr = (int*)malloc(100 * sizeof(int));
	if (!ptr) exit(EXIT_FAILURE);

	printf("Allocation memory \t%lld|n", (long long)ptr);

	free(ptr);
	ptr = NULL;

	return 0;
}
