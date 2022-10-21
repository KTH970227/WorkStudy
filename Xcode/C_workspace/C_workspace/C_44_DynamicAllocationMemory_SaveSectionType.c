#include <stdio.h>
#include <stdlib.h>

//동적 할당 메모리와 저장공간 분류
//명령줄 인수와 환경변수들(Command-line arguments and environment variables)
//	-스택(Stack)
//	-자유공간(Free)
//	-힙(Heap)
//	-초기화되지 않은 전역,정적 변수들(BSS(Block Started by Symbol) Segment)
//	-초기화된 전역,정적 변수들(DATA Segment)
//	-프로그램 코드[읽기전용](TEXT Segment)


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
