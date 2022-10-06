#define _CRT_SECRUE_NO_WARININGS

#include <stdio.h>
#include <stdlib.h>  //malloc

//sizeof 연산자 : 메모리 값을 알기 위해 사용

struct MyStruct
{
    int i;
    float f;
};

int main()
{
    //1. sizeof basic types
    int a = 0;
    unsigned int int_size1 = sizeof a;
    unsigned int int_size2 = sizeof(int);
    unsigned int int_size3 = sizeof(a);
    
    size_t int_size4 = sizeof(a);
    size_t float_size = sizeof(float);
    
    printf("Size of int type is %u bytes.\n", int_size1);
    printf("Size of int type is %zu bytes.\n", int_size4);
    printf("Size of float type is %zu bytes.\n", float_size);
    
    //2. sizeof arrays
    int int_arr[30];        //컴파일 시 메모리 할당
    int *int_ptr = NULL;    //런타임 시 메모리 할당
    int_ptr = (int*)malloc(sizeof(int) * 30);
    
    printf("Size of array = %zu bytes\n", sizeof(int_arr));
    printf("Size of pointer = %zu bytes\n", sizeof(int_ptr));
    
    //3. sizeof character array
    char c = 'a';
    char string[10];
    
    size_t char_size = sizeof(c);
    size_t str_size = sizeof(string);
    
    printf("Size of Char type is %zu bytes. \n", char_size);
    printf("Size of string type is %zu bytes. \n", str_size);
    
    
    printf("Size of struct is %zu bytes. \n", sizeof(struct MyStruct));
    
    return 0;
}
