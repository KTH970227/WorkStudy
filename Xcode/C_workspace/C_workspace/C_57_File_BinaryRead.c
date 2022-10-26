#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>
#include <Windows.h>

//텍스트 파일을 바이너리처럼 읽어보기
//ABC
//DE
//123
//C언어

int main()
{
	FILE* fp = fopen("test.txt", "rb");

	unsigned char ch;

	SetConsoleOutputCP(CP_UTF8); //UTF-8 mode

	while (fread(&ch, sizeof(unsigned char), 1, fp) > 0)
	{
		//printf("%c", ch);
		printf("%hhu %c\n", ch, ch);
	}

	fclose(fp);

	return 0;
}