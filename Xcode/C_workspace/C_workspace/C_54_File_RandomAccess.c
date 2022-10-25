#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>

//파일의 임의 접근
// ABCDEFGHIJKLMNOPQRSTUVWXYZ

//ftell() : 현재 위치, 어디서 읽을 준비가 되어있는지
//fseek() : 시작점으로부터 @L 이동할 수 있다.

int main()
{
	int ch;
	long cur;

	FILE* fp = fopen("test.txt", "r");

	
	cur = ftell(fp);
	printf("ftell() = %ld\n", cur);

	fseek(fp, 2L, SEEK_SET);
	cur = ftell(fp);
	printf("ftell() = %ld\n", cur);
	ch = fgetc(fp);
	printf("%d %c\n", ch, ch);
	cur = ftell(fp);
	printf("ftell() = %ld\n", cur);

	fseek(fp, -2L, SEEK_CUR);
	cur = ftell(fp);
	printf("ftell() = %ld\n", cur);
	ch = fgetc(fp);
	printf("%d %c\n", ch, ch);

	fseek(fp, 0L, SEEK_END);
	ch = fgetc(fp);
	printf("%d %c\n", ch, ch);

	fseek(fp, -1L, SEEK_END);
	ch = fgetc(fp);
	printf("%d %c\n", ch, ch);

	fseek(fp, -2L, SEEK_END);
	ch = fgetc(fp);
	printf("%d %c\n", ch, ch);


	//파일의 크기가 클 경우
	//fsetpos(), fgetpos()

	fpos_t pt;
	pt = 10;
	fsetpos(fp, &pt); //return 0
	ch = fgetc(fp);
	printf("%d %c\n", ch, ch);
	fgetpos(fp, &pt); //return 0
	printf("%lld\n", pt);

	return 0;
}