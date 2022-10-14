#define _CRT_SECRUE_NO_WARININGS

#include <stdio.h>

//Storage duration: 메모리의 지속시간 4가지
//-static storage duration
//(Note: 'static' keyword indicates the linkage type, not the storage duration)
//-automatic storage duration
//-allocated storage duration
//-thread storage duration

void count()
{
    int ct = 0;
    printf("count = %d\n", ct);
    ct++;
}

void static_count()
{
    static int ct = 0;
    printf("static count = %d\n", ct);
    ct++;
}

int main()
{
    count();
    count();
    static_count();
    static_count();
    
    return 0;
}
