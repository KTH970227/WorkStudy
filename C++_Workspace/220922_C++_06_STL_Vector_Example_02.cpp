#include <stdio.h>
#include <vector>
using namespace std;
#pragma warning(disable: 4996)
#include <algorithm>

struct Student
{
	char m_Name[128];
	int m_Kor;
	int m_Eng;
	int m_Math;
	int m_Total;
	float m_Avg;
};

//정렬 조건 함수
bool MySort(const Student& a, const Student& b)
{
	//return a.m_Kor < b.m_Kor;  //오름차순 정렬(국어점수가 작은값에서 큰값으로 정렬)
	return a.m_Total > b.m_Total; //내림차순 정렬(큰값에서 작은값으로 정렬)
}

void PrintList(vector<Student>* a_StList)
{
	printf("\n<학생 리스트>\n");
	for (int ii = 0; ii < (*a_StList).size(); ii++)
	{
		printf("%d번 : 이름(%s) 국어(%d) 영어(%d) 수학(%d) 총점(%d) 평균(%.2f)\n",
			ii + 1, (*a_StList)[ii].m_Name, (*a_StList)[ii].m_Kor, (*a_StList)[ii].m_Eng,
			(*a_StList)[ii].m_Math, (*a_StList)[ii].m_Total, (*a_StList)[ii].m_Avg);
	}
}

void InputList(vector<Student>* a_StList)
{
	Student a_TpNode;

	printf("%d번 학생 이름을 입력해 주세요 : ", (*a_StList).size() + 1);
	scanf("%s", a_TpNode.m_Name);
	getchar();

	printf("국어점수 : ");
	scanf("%d", &a_TpNode.m_Kor);
	getchar();

	printf("영어점수 : ");
	scanf("%d", &a_TpNode.m_Eng);
	getchar();

	printf("수학점수 : ");
	scanf("%d", &a_TpNode.m_Math);
	getchar();

	a_TpNode.m_Total = a_TpNode.m_Kor + a_TpNode.m_Eng + a_TpNode.m_Math;
	a_TpNode.m_Avg = a_TpNode.m_Total / 3.0f;

	(*a_StList).push_back(a_TpNode);

	PrintList(a_StList);

	printf("\n");
}

void DelListNode(vector<Student>* a_StList)
{
	PrintList(a_StList);

	printf("\n");
	printf("삭제할 학생 번호를 입력해 주세요 : ");

	int a_DIdx = -1;
	scanf("%d", &a_DIdx);
	getchar();

	a_DIdx--;

	if (0 <= a_DIdx && a_DIdx < (*a_StList).size())
	{
		(*a_StList).erase((*a_StList).begin() + a_DIdx);
		printf("(삭제 결과)");
		PrintList(a_StList);

	}//if (0 <= a_DIdx && a_DIdx < m_StList.size())
}

void SortListAll(vector<Student>* a_StList)
{
	sort((*a_StList).begin(), (*a_StList).end(), MySort); //#include <algorithm>

	PrintList(a_StList);

	printf("\n");
}

void main()
{
	vector<Student> m_StList;

	while (true)
	{
		printf("1, 추가  2, 학생전학(삭제)  3, 총점순정렬  999, 프로그램종료 : ");

		int a_Sel = 0;
		scanf("%d", &a_Sel);
		getchar();

		if (a_Sel < 1 || 3 < a_Sel)
		{
			if (a_Sel == 999)
				break;

			system("cls");
		}

		if (a_Sel == 1)  //<-- 1, 학생추가
		{
			InputList(&m_StList);
		}//if (a_Sel == 1)  //<-- 1, 학생추가
		else if (a_Sel == 2) //<-- 2, 학생삭제
		{
			DelListNode(&m_StList);
		}//else if (a_Sel == 2) //<-- 2, 학생삭제
		else if (a_Sel == 3) //<--- 총점순 정렬
		{
			SortListAll(&m_StList);
		}

		printf("Enter 입력시 프로그램 계속 진행...");
		getchar();
		system("cls");

	}//while (true)

	m_StList.clear();
}