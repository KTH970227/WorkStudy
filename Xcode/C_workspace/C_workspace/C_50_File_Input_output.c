#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>
#include <stdlib.h>

//TEXT ���� ����� ����

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
// r: �б�
// w: ������ ����� ���� or �̹� ���� ��� �����(��� ����� ����)
// a: ������ ����� ���� or �̹� ���� ��� �ڿ� �������� 
// r+: �б�+����
// w+: �б�+����, ����� or ���� ���� �����
// a+: �б�+����, �������� or ���� ���� �����

int main(int argc, char* argv[])
{
	int ch;
	FILE* fr, * fw;

	//const char* in_filename = "C_50_TestFile_Main.txt"; //�Ӽ� - ����� - ����μ� - C_50_TestFile_Main.txt �Է� �� ���� - Ȯ��
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