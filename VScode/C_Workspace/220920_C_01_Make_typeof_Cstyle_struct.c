#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

typedef struct _Item//typedef을 응용한 구조체.
{
    char m_Name[128];
    int  m_Cost;
    int  m_Leve;
} Item;

typedef unsigned int UINT;

int main()
{
    UINT ABC = 11;
    printf("%d\n\n", ABC);

    Item a_It; //C문법에서는 객체 선언시 struct 키워드를 적어줘야 한다.
    strcpy(a_It.m_Name, "드래곤 검");
    a_It.m_Cost = 1200;
    a_It.m_Leve = 3;

    printf("%s : 가격(%d) 레벨(%d)\n", a_It.m_Name, a_It.m_Cost, a_It.m_Leve);

    getchar();
}