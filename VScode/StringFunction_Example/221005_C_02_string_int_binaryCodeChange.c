#include <stdio.h>


void printf_char_as_binary(unsigned char input)
{
    int i;
    printf("input(Hex) : %.2x , (Binary) : ");

    for(i = 0; i < 8; i++)
    {
        char shift_byte = 0x01 << (7-i);

        if(shift_byte & input)
            printf("1");
        else
            printf("0");
    }
    printf("\r\n");
}

//비트 : 10진수 -> 2진수 변환
void ten_to_two(unsigned n)
{
    unsigned a = 0x80000000;
    for(int  i = 0; i < 32; i++)
    {
        if((a & n) == a)
            printf("1");
        else
            printf("0");
        
        a >>= 1;
    }
}

//배열 : 10진수 -> 2진수 변환
void ten_to_twoArray(unsigned n)
{
    //동적배열 생성
    int size  = 1;
    int *a = (int*)calloc(sizeof(int) *size);

    //배열에 원소넣기 ex) 11 => 1 1 0 1
    for(int i = 0; n != 0; i++)
    {
        a[i] = n % 2;
        if(n != 0)
        {
            size++;
            a = realloc(a, sizeof(int) *size);
        }
    }

    //배열 원소 거꾸로 출력
    for(int i = size - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }

    free(a);
}

int main()
{
    char s = 'a';

    printf_char_as_binary(s);

    //비트 : 10진수 -> 2진수 변환
    int iii1 = 123;
    ten_to_two(iii1);

    //배열 : 10진수 -> 2진수 변환
    int iii2 = 456;
    ten_to_twoArray(456);

}