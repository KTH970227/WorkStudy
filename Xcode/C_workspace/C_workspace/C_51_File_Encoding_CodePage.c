#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h> //SetConsoleOutputCP()

//�ؽ�Ʈ ���ڵ��� �ڵ� ������

int main(int argc, char* argv[])
{
	const UINT default_cp = GetConsoleOutputCP();
	printf("%u\n", default_cp);

	int ch;
	FILE* fr, * fw;

	//���� ���� �� Incoding = ANSI�� �ٲٰ� �����ؾ� �ѱ��� ��µ�
	const char* in_filename = "C_50_����2.txt"; //�Ӽ� - ����� - ����μ� -C_50_����2.txt �Է� �� ���� - Ȯ��
	const char* out_filename = "C_50_�纻.txt";

	unsigned long count = 0;

	if (argc != 2)
	{
		printf("Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	//Read
	//if ((fr = fopen(argv[1], "r")) == NULL) //Open a text file for reading
	if ((fr = fopen(in_filename, "r")) == NULL) //Open a text file for reading
	{
		//printf("Can't open %s\n", argv[1]);
		printf("Can't open %s\n", in_filename);
		exit(EXIT_FAILURE);
	}
	//Write
	if ((fw = fopen(out_filename, "w")) == NULL)
	{
		printf("Can't open %s\n", out_filename);
		exit(EXIT_FAILURE);
	}

	SetConsoleOutputCP(CP_UTF8); //UTF-8 mode

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

	SetConsoleOutputCP(default_cp); //ISO 2022 Korean

	printf("FILE %s has %lu characters\n", argv[1], count);
	printf("Copied to %s\n", out_filename);

	printf("�ѱ� ��� Ȯ��");

	return 0;
}