#define _CRT_SECRUE_NO_WARININGS

#include <stdio.h>
#include <stdlib.h>

//텍스트 파일 읽기

int main()
{
    int c;
    FILE *file = NULL;
    char file_name[] = "my_file.text";
    
    file = fopen(file_name, "r");
    if(file == NULL)
    {
        printf("Failed to open file.\n");
        exit(1);
    }
    
    while((c = getc(file)) != EOF)
        putchar(c);
    fclose(file);
    
    return 0;
}
