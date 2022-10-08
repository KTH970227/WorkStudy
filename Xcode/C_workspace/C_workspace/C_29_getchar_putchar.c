#define _CRT_SECRUE_NO_WARININGS

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <float.h>

#define STOP '.'
//표준 입출력 함수들
//getchar()
//putchar()

int main()
{
    //대 소문자 바꾸기
    char ch;

    while((ch = getchar()) != '\n')
    {
        //대 소문자 바꾸기
        if(ch >= 'a' && ch <= 'z' )  //'A' = 65, 'a' = 97
            ch -= 'a' - 'A';
        else if(ch >= 'A' && ch <= 'Z')
            ch += 'a' - 'A';

        putchar(ch);
    }

    putchar(ch);
    
    //단어 세기 예제
    char c;
    int n_chars = 0;
    int n_lines = 0;
    int n_words = 0;
    bool word_flag = false;
    bool line_flag = false;

    printf("Enter Text : ");

    while((c = getchar()) != STOP)
    {
        if(!isspace(c))
            n_chars++;

        if(!isspace(c) && !line_flag)
        {
            n_lines++;
            line_flag = true;
        }

        if(c == '\n')
            line_flag = false;

        if(!isspace(c) && !word_flag)
        {
            n_words++;
            word_flag = true;
        }

        if(isspace(c))
            word_flag = false;
    }

    printf("Chars = %d, Words = %d, Lines = %d\n", n_chars, n_words, n_lines);
    
    
    
    //최대, 최소, 평균 구하기 예제
    float max = -FLT_MAX;
    float min = FLT_MAX;
    float sum = 0.0f;
    float input;
    int n = 0;
    
    while(scanf("%f", &input) == 1)
    {
        if(input < 0.0f || input > 100.0f)
            continue;
        
        max = (input > max) ? input : max;
        min = (input < min) ? input : min;

        sum += input;

        n++;
    }
    
    if(n > 0)
        printf("min = %f, max = %f, sum = %f, ave = %f\n", min, max, sum, sum / n);
    else
        printf("No input\n");
    
    return 0;
}
