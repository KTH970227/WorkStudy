#include <stdio.h>
#include <map>
#include <string>
#include <iostream>

using namespace std;
#pragma warning(disable: 4996)

// STL map
// 장점 : 스트링을 키값으로 검색 속도가 빠르다.
// 단점 : 추가, 삭제가 좀 느리고 insert()를 해서 노드를 추가하더라도 
//		키값 순으로 자동 정렬되서 추가된다. 정렬의 의미가 없다.
//		(내가 원하는 조건의 sort()가 안된다.)
// 활용도 : 대규모 유저관리, 리소스 관리...
// 1, 키값(스트링 or 정수) 으로 저장되어 있는 리스트의 검색이 빠르다.
// 2, 리소스 매니저에서 주로 사용된다.
// 3, 네트워크 게임에서 유저의 UniqID를 검색할 때 사용된다.
// 4, 게임에서 아이템 고유번호 검색할 때 사용된다.

class ItemInfo
{
public:
	char m_Name[128];	//아이템 이름
	int  m_Grade;		//등급
	int  m_Star;		//성급

public:
	ItemInfo() //디폴트 생성자 함수
	{
		m_Name[0] = '\0';
		m_Grade = 0;
		m_Star = 0;
	}

	ItemInfo(const char* a_Name, int a_Grade, int a_Star) //생성자 오버로딩 함수
	{
		strcpy(m_Name, a_Name);
		m_Grade = a_Grade;
		m_Star = a_Star;
	}

public:
	void PrintInfo()
	{
		cout << "이름(" << m_Name << ") " <<
			"등급(" << m_Grade << ") " << "성급(" << m_Star << ")" << endl;
	}
};

void main()
{
	map<string, ItemInfo> m_ItemList;	//<키값의 데이터형, 노드의 데이터형>
	map<string, ItemInfo>::iterator a_iter;

	////C++ 11에서 타입 추론 auto   C# 에서는 var
	////auto는 어떤 데이터형이든 될 수 있는 데이터형으로
	////초기값의 형식에 맞춰 인스턴스(변수)의 형식이 자동으로 결정되는 데이터형 
	//int AAA = 7;
	//double BBB = 11.2;
	//short CCC = 3;
	//float DDD = 12.5f;

	//auto EEE = 7;
	//auto FFF = 11.2;
	//auto GGG = CCC;
	//auto HHH = 12.5f;

	//EEE = 3.14f;
	//GGG = 70000;

	//cout << EEE << " : " << GGG << endl;

	//------ 추가
	ItemInfo a_NodeA("고양이의 파란 검", 2, 2);
	m_ItemList["고양이의 검"] = a_NodeA; //<--1번 방법
	//1번 방법 : 같은 키값의 노드가 이미 존재하면 덮어씌우기 되어 버린다.

	//ItemInfo a_NodeB("너구리의 빨간 반지", 3, 1);
	//m_ItemList["고양이의 검"] = a_NodeB;

	ItemInfo a_NodeC("강아지의 검은 방패", 2, 2);
	m_ItemList.insert(map<string, ItemInfo>::value_type("강아지의 방패", a_NodeC));
	//2번 방법 : 같은 키값의 노드가 이미 존재하면 새로 추가하는 노드는 무시되서 추가되지 않는다.

	//ItemInfo a_NodeD("너구리의 빨간 반지", 3, 1);
	//m_ItemList.insert(map<string, ItemInfo>::value_type("강아지의 방패", a_NodeD));

	ItemInfo a_NodeE("거북이의 흰 겁옷", 300, 300);
	m_ItemList.insert(map<string, ItemInfo>::value_type("거북이의 갑옷", a_NodeE));
	//------ 추가

	//------ 순환
	//for (a_iter = m_ItemList.begin(); a_iter != m_ItemList.end(); a_iter++)
	//{
	//	cout << "First(key) : " << (*a_iter).first.c_str() << 
	//		", Second(Value) : ";
	//	(*a_iter).second.PrintInfo(); 
	//}

	//cout << endl;

	for (const auto& a_Node : m_ItemList)
	{
		cout << "First(key) : " << a_Node.first.c_str() <<
			", Second(Value) : ";
		((ItemInfo)a_Node.second).PrintInfo();
	}
	//------ 순환

	//------ 검색(문자열 검색이 빠르다.)
	cout << endl;
	//--- 1번 방법 : 키값을 배열의 인덱스처럼 사용해서 검색해 오는 방법
	string a_fStr = "강아지의 방패";
	printf("Second(Value) : 이름(%s) 등급(%d) 성급(%d)\n", 
				m_ItemList["강아지의 방패"].m_Name, 
				m_ItemList[a_fStr].m_Grade, 
				m_ItemList[a_fStr].m_Star);

	//printf("Second(Value) : 이름(%s) 등급(%d) 성급(%d)\n",
	//			m_ItemList["상어의 이빨"].m_Name,
	//			m_ItemList["상어의 이빨"].m_Grade,
	//			m_ItemList["상어의 이빨"].m_Star);
	//---단 "강아지의 방패" 키가 이미 확실하게 Insert가 되어 있다는 걸 알고 있늘 때 사용 가능
	//"상어의 이빨"처럼 추가한 적이 없는 경우 1번 방법처럼 검색하면 검색만 되는게 아니라
	//자동으로 "상어의 이빨" 노드를 추가해 버린다.

	cout << endl << "<검색 결과 출력>" << endl;
	for (const auto& a_Node : m_ItemList)
	{
		cout << "First(key) : " << a_Node.first.c_str() <<
			", Second(Value) : ";
		((ItemInfo)a_Node.second).PrintInfo();
	}

	cout << endl << "<검색 결과 확인>" << endl;

	//--- 2번 방법 : 키값이 리스트에 존재하는지 찾아서 접근하는 방법1
	a_iter = m_ItemList.find("고양이의 검"); //키값을 가지고 있는 노드가 있는지? 검색
	if (a_iter != m_ItemList.end())
	{
		printf("First(Key) : %s, ", (*a_iter).first.c_str());
		printf("Second(Value) : 이름(%s) 등급(%d) 성급(%d)\n", 
			(*a_iter).second.m_Name, 
			(*a_iter).second.m_Grade,
			(*a_iter).second.m_Star);
	}//if (a_iter != m_ItemList.end())

	cout << endl;
	//첫번째 노드를 찾아 오는 방법
	if (!m_ItemList.empty())
	{
		a_iter = m_ItemList.begin();
		printf("첫번재 노드 검색 성공 : 이름(%s) 등급(%d) 성급(%d)\n", 
			(*a_iter).second.m_Name, 
			(*a_iter).second.m_Grade,
			(*a_iter).second.m_Star);
	}

	cout << endl;
	//마지막 노드를 찾아 오는 방법
	if (!m_ItemList.empty())
	{
		a_iter = m_ItemList.end();
		a_iter--;
		printf("마지막 노드 검색 성공 : 이름(%s) 등급(%d) 성급(%d)\n",
			(*a_iter).second.m_Name,
			(*a_iter).second.m_Grade,
			(*a_iter).second.m_Star);
	}
	//------ 검색(문자열 검색이 빠르다.)

	//------ 중간값 제거하기...
	cout << endl;
	//int a_Index = 1;  해당 인덱스 노드 삭제하기
	//if (0 <= a_Index && a_Index < m_ItemList.size())
	//{
	//	a_iter = m_ItemList.begin();
	//	advance(a_iter, a_Index); //이터레이터를 인덱스만큼 이동시킴
	//	printf("%s ------> %s : 제거됨\n", 
	//			(*a_iter).first.c_str(), 
	//			(*a_iter).second.m_Name);
	//	m_ItemList.erase(a_iter);
	//}
    ////조건에 맞는 하나 제거하는 방법
	//if (!m_ItemList.empty())
	//{
	//	for (a_iter = m_ItemList.begin(); a_iter != m_ItemList.end(); a_iter++)
	//	{
	//		if ((*a_iter).second.m_Grade == 300)
	//		{
	//				printf("%s ------> %s : 제거됨\n", 
	//						(*a_iter).first.c_str(), 
	//						(*a_iter).second.m_Name);
	//				m_ItemList.erase(a_iter);
	//				break;
	//		}//if ((*a_iter).second.m_Grade == 1)
	//	}
	//}//if (!m_ItemList.empty())
	////for문 돌면서 조건에 걸리는 모든 노드를 제거하는 방법
	//cout << endl << "m_Grade == 2 인 조건의 노드를 모두 제거" << endl;
	//if(!m_ItemList.empty())
	//	for ( a_iter = m_ItemList.begin(); a_iter != m_ItemList.end(); )
	//	{
	//		if ((*a_iter).second.m_Grade == 2)
	//		{
	//			printf("%s ------> %s : 제거됨\n", 
	//					(*a_iter).first.c_str(), 
	//					(*a_iter).second.m_Name);
	//			a_iter = m_ItemList.erase(a_iter);
	//		}
	//		else
	//		{
	//			a_iter++;
	//		}
	//	}//for ( a_iter = m_ItemList.begin(); a_iter != m_ItemList.end(); )

	//검색 후 삭제 방법
	a_iter = m_ItemList.find("고양이의 검"); //키값을 가지고 있는 노드가 있는지? 검색
	if (a_iter != m_ItemList.end())
	{
		printf("%s ------> %s : 제거됨\n", 
					(*a_iter).first.c_str(), 
					(*a_iter).second.m_Name);
		m_ItemList.erase(a_iter);
	}//if (a_iter != m_ItemList.end())

	cout << endl << "<삭제 결과 출력>" << endl;
	for (const auto& a_Node : m_ItemList)
	{
		cout << "First(key) : " << a_Node.first.c_str() <<
			", Second(Value) : ";
		((ItemInfo)a_Node.second).PrintInfo();
	}
	//------ 중간값 제거하기...

	//------ 소팅
	// 리스트로 복사 후
	// 리스트를 소팅하고
	// 리스트를 순환하면서 출력해서 보여주는 방법
	//------ 소팅

	//------ 전체 노드 삭제
	m_ItemList.clear();
	//------ 전체 노드 삭제

	cin.get();
}