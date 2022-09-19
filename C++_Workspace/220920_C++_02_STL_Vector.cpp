#include <stdio.h>
#include <vector>     //<--- STL vector 사용을 위해서 추가해 주어야 하는 헤더
using namespace std;  //<--- STL vector 사용을 위해서 추가해 주어야 하는 헤더
#include <algorithm>

// 자료구조
// 자료구조란 자료의 사용 방법이나 성격에 따라 혀율적으로 사용하기 위하여 조직하고 저장하는 방법
// vector : STL의 가변배열

//정렬 조건 함수
bool MyCompare(const int& a, const int& b)
{
	//return a < b; //오름차순(작은값에서 큰값으로 정렬)
	return a > b; //내림차순(큰값에서 작은값으로 정렬)
}

int main()
{
	vector<int> m_List;

	//------ 노드 추가
	m_List.push_back(24);
	m_List.push_back(33);
	m_List.push_back(50);
	m_List.push_back(25);
	m_List.push_back(77);
	m_List.push_back(12);
	//------ 노드 추가

	//------ 순환 출력
	int a_Count = m_List.size();
	for (int ii = 0; ii < a_Count; ii++)
	{
		printf("[%d] : %d\n", ii, m_List[ii]);
	}

	printf("\n");

	m_List.push_back(111);
	m_List.push_back(222);
	m_List.push_back(333);

	for (int ii = 0; ii < m_List.size(); ii++)
	{
		printf("[%d] : %d\n", ii, m_List[ii]);
	}
	//------ 순환 출력

	//------ 노드 삭제
	printf("\n");
	//*첫번째 노드 삭제 방법
	//m_List.erase(m_List.begin());  //[0]번 인덱스 삭제 명령

	//*중간 노드 삭제 방법
	//m_List.erase(m_List.begin() + 2); //[2]번 인덱스 삭제 명령

	//for (int ii = 0; ii < m_List.size(); ii++)
	//{
	//	printf("[%d] : %d\n", ii, m_List[ii]);
	//}
	
	//*마지막 노드를 삭제 방법
	//m_List.erase(m_List.end() - 1);   //m_List.erase(m_List.end());
	//m_List.pop_back();


	m_List.erase(m_List.begin() + (m_List.size() - 1));
	for (int ii = 0; ii < m_List.size(); ii++)
	{
		printf("[%d] : %d\n", ii, m_List[ii]);
	}
	//------ 노드 삭제

	printf("\n");

	//------ 중간에 특정한 조건의 값들을 제거하는 방법
	vector<int>::iterator iter;
	for ( iter = m_List.begin(); iter != m_List.end(); )
	{
		if ((*iter) < 35)
		{
			iter = m_List.erase(iter);
		}
		else
		{
			iter++;
		}
	}

	printf("\n중간에 특정한 조건의 값들을 제거한 결과 보기\n");

	for (int ii = 0; ii < m_List.size(); ii++)
	{
		printf("[%d] : %d\n", ii, m_List[ii]);
	}
	//------ 노드 삭제

	printf("\n");

	//------- 중간값 추가
	m_List.insert(m_List.begin() + 1, 1000); //[1] 노드로 1000 이 추가되면서 다른 노드들이 뒤로 밀린다.

	//------- 이터레이터를 통한 순환 출력 방법
	vector<int>::iterator itr;
	int idx = 0;
	for (itr = m_List.begin(); itr != m_List.end(); itr++)
	{
		printf("[%d] : %d\n", idx, (*itr));
		idx++;
	}
	//------- 이터레이터를 통한 순환 출력 방법
	//------- 중간값 추가

	printf("\n");

	//------- 정렬 #include <algorithm>
	sort(m_List.begin(), m_List.end(), MyCompare);
	for (int ii = 0; ii < m_List.size(); ii++)
	{
		printf("[%d] : %d\n", ii, m_List[ii]);
	}
	//------- 정렬

	//------- 전체 노드 삭제
	m_List.clear();
	printf("\n%lu\n", m_List.size());
	//------- 전체 노드 삭제

	getchar();
}