#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>
#include <Windows.h>

//�ؽ�Ʈ ������ ���̳ʸ�ó�� �о��
//ABC
//DE
//123
//C���

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