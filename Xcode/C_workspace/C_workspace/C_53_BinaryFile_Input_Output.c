#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>
#include <stdlib.h>

//바이너리 파일 입출력

//fopen() mode string for binary IO
// "rb", "wb", "ab"
// "ab+", "a+b"
// "wb+", "w+b"
// "ab+", "a+b"

//C11 ;x; mode fails if the thile exixts, instead if overwriting it.
// "wx", "wbx", "w+x", "wb+x", "w+bx"

int main(int argc, char* argv[])
{
	//Writing example
	{
		FILE* fp = fopen("binary_file", "wb");

		double d = 1.0 / 3.0;
		int n = 123;
		int* parr = (int*)malloc(sizeof(int) * n);
		if (!parr) exit(EXIT_FAILURE);

		for (int n = 0; n < 123; ++n)
			*(parr + n) = n * 2;

		fwrite(&d, sizeof(d), 1, fp);
		fwrite(&n, sizeof(n), 1, fp);
		fwrite(parr, sizeof(parr), n, fp);

		fclose(fp);
		free(parr);

		//Total size is 8 * 1 + 4 * 1 + 123 * 4 = 504 bytes
	}

	//Reading example, feof(), ferror()
	{
		FILE* fp = fopen("binary_file", "rb");
		double d;
		int n = 0;
		fread(&d, sizeof(d), 1, fp);
		fread(&n, sizeof(n), 1, fp);

		int* parr = (int*)malloc(sizeof(int) * n);
		if(!parr) exit(EXIT_FAILURE);

		fread(parr, sizeof(parr), n, fp);

		printf("feof = %d\n", feof(fp));

		printf("%f\n", d);
		printf("%d\n", n);

		for (int i = 0; i < n; ++i)
			printf("%d ", *(parr + i));
		printf("\n");

		printf("feof = %d\n", feof(fp)); //= 0

		fread(&n, sizeof(n), 1, fp);

		printf("feof = %d\n", feof(fp)); //- 1
		printf("ferror = %d\n", ferror(fp));//= 0

		fwrite(&n, sizeof(n), 1, fp);

		printf("ferror = %d\n", ferror(fp)); //= 1

		fclose(fp);
		free(parr);
	}
}