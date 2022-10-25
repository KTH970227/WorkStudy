#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 31

//�ؽ�Ʈ ���� ����� �Լ���

int main(void)
{
	FILE* fp;
	char words[MAX] = { '\0' };

	const char* filename = "record";
	
	//fopen mode strings
	// r: �б�
	// w: ������ ����� ���� or �̹� ���� ��� �����(��� ����� ����)
	// a: ������ ����� ���� or �̹� ���� ��� �ڿ� �������� 
	// r+: �б�+����
	// w+: �б�+����, ����� or ���� ���� �����
	// a+: �б�+����, �������� or ���� ���� �����

	if ((fp = fopen(filename, "r+")) == NULL) //Open a text file for reading
	{
		fprintf(stderr, "Can't open \"%s\" file.\n", filename);
		exit(EXIT_FAILURE);
	}

	while ((fscanf(stdin, "%30s", words) == 1) && (words[0] != '.'))
		fprintf(fp, "%s\n", words);

	//while ((fgets(words, MAX, stdin) != NULL) && (words[0] != '.'))
	//	fputs(words, fp);

	rewind(fp); //go back to geginning of file

	while (fscanf(fp, "%s", words) != EOF) //== 1
		fprintf(stdout, "%s\n", words);
	
	//while (fgets(words, MAX, fp) != NULL) // EOF Check
	//	fputs(words, stdout);

	if (fclose(fp) != 0)
		fprintf(stderr, "Error closing file\n");

	return 0;
}