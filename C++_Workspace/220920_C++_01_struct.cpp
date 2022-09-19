#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma warning(disable: 4996)

//구조체 : 공통된 목적으로 묶어놓은 변수들의 집합

//학생 한명의 정보를 저장하기 위한 목적으로 묶어놓은 변수들의 집합
struct Student  //구조체 설계(사용자 정의의 데이터형)
{
    char  m_Name[128];
    int   m_Kor;
    int   m_Eng;
    int   m_Math;
    int   m_Total;
    float m_Avg;
};

int main()
{
    //int abc;
    Student a_St; //구조체 변수의 선언 (객체선언)


    strcpy(a_St.m_Name, "아기상어");
    a_St.m_Kor  = 85;
    a_St.m_Eng  = 55;
    a_St.m_Math = 75;
    a_St.m_Total = a_St.m_Kor + a_St.m_Eng + a_St.m_Math;
    a_St.m_Avg = a_St.m_Total / 3.0f;

    printf("%s : 국어(%d) 영어(%d) 수학(%d) 총점(%d) 평균(%.2f)\n",
                a_St.m_Name, a_St.m_Kor, a_St.m_Eng, 
                a_St.m_Math, a_St.m_Total, a_St.m_Avg);

    Student AAA;

    strcpy(AAA.m_Name, "호랑이");
    AAA.m_Kor = 11;
    AAA.m_Eng = 12;
    AAA.m_Math = 13;
    AAA.m_Total = AAA.m_Kor + AAA.m_Eng + AAA.m_Math;
    AAA.m_Avg = AAA.m_Total / 3.0f;

    printf("%s : 국어(%d) 영어(%d) 수학(%d) 총점(%d) 평균(%.2f)\n",
        AAA.m_Name, AAA.m_Kor, AAA.m_Eng,
        AAA.m_Math, AAA.m_Total, AAA.m_Avg);

    Student BBB;

    //int aaa[3];

    Student a_StList[3];  //<-- 구조체 배열 선언

    strcpy(a_StList[0].m_Name, "강아지");
    a_StList[0].m_Kor = 85;
    a_StList[0].m_Eng = 56;
    a_StList[0].m_Math = 75;
    a_StList[0].m_Total = a_StList[0].m_Kor + a_StList[0].m_Eng + a_StList[0].m_Math;
    a_StList[0].m_Avg = a_StList[0].m_Total / 3.0f;

    strcpy(a_StList[1].m_Name, "너구리");
    a_StList[1].m_Kor = 45;
    a_StList[1].m_Eng = 78;
    a_StList[1].m_Math = 25;
    a_StList[1].m_Total = a_StList[1].m_Kor + a_StList[1].m_Eng + a_StList[1].m_Math;
    a_StList[1].m_Avg = a_StList[1].m_Total / 3.0f;

    strcpy(a_StList[2].m_Name, "고양이");
    a_StList[2].m_Kor = 95;
    a_StList[2].m_Eng = 88;
    a_StList[2].m_Math = 72;
    a_StList[2].m_Total = a_StList[2].m_Kor + a_StList[2].m_Eng + a_StList[2].m_Math;
    a_StList[2].m_Avg = a_StList[2].m_Total / 3.0f;

    printf("\n<학생 리스트>\n");

    for (int ii = 0; ii < 3; ii++)
    {
        printf("%s : 국어(%d) 영어(%d) 수학(%d) 총점(%d) 평균(%.2f)\n",
            a_StList[ii].m_Name, a_StList[ii].m_Kor, a_StList[ii].m_Eng,
            a_StList[ii].m_Math, a_StList[ii].m_Total, a_StList[ii].m_Avg);
    }

    printf("\n");

    //<--- 구조체 객체 동적할당
    Student* a_pList = NULL;

    printf("학생수를 입력해 주세요 : ");
    int a_StNum = 0;
    scanf("%d", &a_StNum);
    getchar();

    a_pList = (Student*)malloc(a_StNum * sizeof(Student));
    printf("\n");

    float a_AvgTotal = 0.0f;

    for (int ii = 0; ii < a_StNum; ii++)
    {
        printf("%d번 학생 이름을 입력해 주세요 : ", ii + 1);
        scanf("%s", a_pList[ii].m_Name);
        getchar();

        printf("국어점수 : ");
        scanf("%d", &a_pList[ii].m_Kor);
        getchar();

        printf("영어점수 : ");
        scanf("%d", &a_pList[ii].m_Eng);
        getchar();

        printf("수학점수 : ");
        scanf("%d", &a_pList[ii].m_Math);
        getchar();

        a_pList[ii].m_Total = a_pList[ii].m_Kor + a_pList[ii].m_Eng + a_pList[ii].m_Math;
        a_pList[ii].m_Avg = a_pList[ii].m_Total / 3.0f;
        a_AvgTotal += a_pList[ii].m_Avg;
        printf("\n");
    }

    printf("\n<학생 리스트>\n");
    for (int ii = 0; ii < 3; ii++)
    {
        printf("%s : 국어(%d) 영어(%d) 수학(%d) 총점(%d) 평균(%.2f)\n",
            a_pList[ii].m_Name, a_pList[ii].m_Kor, a_pList[ii].m_Eng,
            a_pList[ii].m_Math, a_pList[ii].m_Total, a_pList[ii].m_Avg);
    }
    printf("\n학생수 : %d,  반평균 : %.2f\n", a_StNum, a_AvgTotal / a_StNum);

    if (a_pList != NULL)
    {
        free(a_pList);
        a_pList = NULL;
    }
    getchar();
}