#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 31

//텍스트 파일 입출력 함수들

int main(void)
{
	FILE* fp;
	char words[MAX] = { '\0' };

	const char* filename = "record";
	
	//fopen mode strings
	// r: 읽기
	// w: 파일을 만들고 쓰기 or 이미 있을 경우 덮어쓰기(모두 지우고 쓰기)
	// a: 파일을 만들고 쓰기 or 이미 있을 경우 뒤에 덧붙히기 
	// r+: 읽기+쓰기
	// w+: 읽기+쓰기, 덮어쓰기 or 새로 파일 만들기
	// a+: 읽기+쓰기, 덧붙히기 or 새로 파일 만들기

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