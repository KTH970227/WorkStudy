#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>

//기타 입출력 함수들

int main()
{
	FILE* fp;
	int ch;

	
	fp = fopen("input.txt", "r");

	// ungetc() : 다시 읽어들이고, 추가함
	{
		ch = fgetc(fp);
		fputc(ch, stdout);

		ungetc(ch, fp); //try another characters

		ch = fgetc(fp);
		fputc(ch, stdout);

		fclose(fp);
	}

	//setvbuf()
	{
		char buffer[32] = { '\0', };

		setvbuf(fp, buffer, _IOFBF, sizeof(buffer)); //_IOLBF, _IOFBF, _IONBF

		ch = fgetc(fp); //Read just only a single character!

		//dump buffer
		for (int i = 0; i < sizeof(buffer); ++i)
			printf("%c", buffer[i]);
		printf("\n");

		fclose(fp);
	}

	//fflush() : 
	{
		//Writing a large amount of data
		fflush(fp);
	}

	return 0;
}