#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

//멀티 쓰레딩

//_Atomic int acnt = 0; //NA

DWORD WINAPI ThreadFunc(void* data)
{
	int n = 1;
	Sleep(1000);

	//acnt += n;  //NA
	printf("Printing from Thread\n");
	return 0;
}

int main()
{
	HANDLE thread = CreateThread(NULL, 0, ThreadFunc, NULL, 0, NULL);

	if (thread)
		WaitForSingleObject(thread, INFINITE);
}