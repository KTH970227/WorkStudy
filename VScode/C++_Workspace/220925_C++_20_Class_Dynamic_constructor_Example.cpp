#include <stdio.h>
#include <string.h>
#include <vector>
#include <iostream>
using namespace std;
#pragma warning(disable: 4996)

//클래스의 동적생성 방법
class ItemInfo
{
public:
	char m_Name[128];
	int m_Level;
	int m_Cost;

public:
	ItemInfo()
	{

	}
	ItemInfo(const char* a_Name, int a_Level, int a_Cost)
	{
		strcpy(m_Name, a_Name);
		m_Level = a_Level;
		m_Cost = a_Cost;
	}
	~ItemInfo()
	{

	}

public:
	void PrintInfo()
	{
		cout << m_Name << " : 레벨(" << m_Level << ") 가격(" << m_Cost << ")" << endl;
	}
};

void main()
{
	vector<ItemInfo> m_MyList;

	ItemInfo a_Test("천상의갑옷", 3, 1200); //객체의 정적할당
	m_MyList.push_back(a_Test);

	strcpy(a_Test.m_Name, "강아지의검");
	a_Test.m_Level = 5;
	a_Test.m_Cost = 1500;
	m_MyList.push_back(a_Test);

	strcpy(a_Test.m_Name, "사자의방패");
	a_Test.m_Level = 7;
	a_Test.m_Cost = 2000;
	m_MyList.push_back(a_Test);

	for (int i = 0; i < m_MyList.size(); i++)
	{
		cout << i + 1 << " : ";
		m_MyList[i].PrintInfo();
	}

	m_MyList.clear();

	vector<ItemInfo*> m_pList;

	ItemInfo* a_TpItem = new ItemInfo("천사의갑옷", 3, 1200); //동적할당과 동시에 초기화
	m_pList.push_back(a_TpItem);

	a_TpItem = new ItemInfo("돌고래의검", 5, 1500);
	m_pList.push_back(a_TpItem);

	a_TpItem = new ItemInfo("거북이의투구", 11, 3000);
	m_pList.push_back(a_TpItem);

	a_TpItem = new ItemInfo("호랑이의반지", 8, 2000);
	m_pList.push_back(a_TpItem);

	a_TpItem = new ItemInfo("드래곤의 반지", 9, 2700);
	m_pList.push_back(a_TpItem);

	cout << endl;

	int aa = 0;
	for (ItemInfo* node : m_pList)
	{
		cout << aa + 1 << " : ";
		node->PrintInfo();
		aa++;
	}

	//--- 특정한 조건에 맞는 노드를 여러개 삭제하는 방법.
	vector <ItemInfo*>::iterator a_Iter;
	for (a_Iter = m_pList.begin(); a_Iter != m_pList.end();)
	{
		if ((*a_Iter)->m_Level <= 5) //아이템 5렙이하 삭제
		{
			if ((*a_Iter) != NULL)
			{
				delete(*a_Iter);
				(*a_Iter) = NULL;
			}
			a_Iter = m_pList.erase(a_Iter);
		}
		else
		{
			a_Iter++;
		}
	}

	//삭제 결과 확인
	cout << endl << "삭제 결과 확인" << endl;
	int bb = 0;
	for (ItemInfo* node : m_pList)
	{
		cout << bb + 1 << " : ";
		node->PrintInfo();
		bb++;
	}

	//----노드 전체삭제
	cout << endl << "전체 삭제 결과 확인" << endl;
	for (int i = 0; i < m_pList.size(); i++)
	{
		if (m_pList[i] != NULL)
		{
			delete m_pList[i];
			m_pList[i] = NULL;
		}
	}
	m_pList.clear();
	//----노드 전체삭제

	cin.get();
}