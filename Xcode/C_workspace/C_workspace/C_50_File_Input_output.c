#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>
#include <stdlib.h>

//TEXT 파일 입출력 예제

/*
typedef struct _iobuf
{
	char* _ptr;
	int _cnt;
	char* _base;
	int _flag;
	int _file;
	int _charbuf;
	int _bufsiz;
	char* _tmpfname;
} FILE;
*/

//fopen mode strings
// r: 읽기
// w: 파일을 만들고 쓰기 or 이미 있을 경우 덮어쓰기(모두 지우고 쓰기)
// a: 파일을 만들고 쓰기 or 이미 있을 경우 뒤에 덧붙히기 
// r+: 읽기+쓰기
// w+: 읽기+쓰기, 덮어쓰기 or 새로 파일 만들기
// a+: 읽기+쓰기, 덧붙히기 or 새로 파일 만들기

int main(int argc, char* argv[])
{
	int ch;
	FILE* fr, * fw;

	//const char* in_filename = "C_50_TestFile_Main.txt"; //속성 - 디버깅 - 명령인수 - C_50_TestFile_Main.txt 입력 후 적용 - 확인
	const char* out_filename = "C_50_TestFile_Copy.txt";

	unsigned long count = 0;

	if (argc != 2)
	{
		printf("Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	//Read
	if ((fr = fopen(argv[1], "r")) == NULL) //Open a text file for reading
	{
		printf("Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	//Write
	if ((fw = fopen(out_filename, "w")) == NULL)
	{
		printf("Can't open %s\n", out_filename);
		exit(EXIT_FAILURE);
	}
	
	while ((ch = fgetc(fr)) != EOF) //getc(fr)
	{
		//Read
		//putc(ch, stdout);  // == putchar(ch);
		fputc(ch, stdout);

		//Write(Copy)
		fputc(ch, fw);

		count++;
	}

	fclose(fr);
	fclose(fw);

	printf("FILE %s has %lu characters\n", argv[1], count);
	printf("Copied to %s\n", out_filename);

	return 0;
}