#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <vector>
using namespace std;  //<--- STL vector 사용을 위해서 추가해 주어야 하는 헤더
#include <algorithm>

#pragma warning(disable: 4996)

enum JOB { JOB1 = 1, JOB2 = 2, JOB3 = 3};

struct CharInfo
{
    char m_Name[128];
    JOB m_Job;
    int m_Level;
    int m_MaxHp;
};

int main(){
    //1.정적 객체에서 정적객체로 복사하는 경우
    CharInfo a_ChNode;
    
    strcpy(a_ChNode.m_Name, "KTH");
    a_ChNode.m_Job = JOB::JOB1;
    a_ChNode.m_Level = 26;
    a_ChNode.m_MaxHp = 200;

    printf("[a_ChNode] %s : JOB(%d) : Level(%d) : MaxHp(%d) \n", a_ChNode.m_Name, a_ChNode.m_Job, a_ChNode.m_Level, a_ChNode.m_MaxHp );
    //[a_ChNode] KTH : JOB(1) : Level(26) : MaxHp(200) 
    CharInfo a_ChNodeCpy = a_ChNode;

    printf("[a_ChNodeCpy] %s : JOB(%d) : Level(%d) : MaxHp(%d) \n", a_ChNodeCpy.m_Name, a_ChNodeCpy.m_Job, a_ChNodeCpy.m_Level, a_ChNodeCpy.m_MaxHp );
    //[a_ChNodeCpy] KTH : JOB(1) : Level(26) : MaxHp(200) 

    //2.정적할당으로 노드를 생성해서 가변배열에 저장하는 경우
    vector<CharInfo> m_ChList;

    m_ChList.push_back(a_ChNode);

    printf("[m_ChList[0]] %s : JOB(%d) : Level(%d) : MaxHp(%d) \n", m_ChList[0].m_Name, m_ChList[0].m_Job, m_ChList[0].m_Level, m_ChList[0].m_MaxHp );
    //[m_ChList[0]] KTH : JOB(1) : Level(26) : MaxHp(200) 


    //3. 동적할당으로 노드를 생성해서 가변배열에 저장하는 경우
    vector<CharInfo* > m_ChList3;
    CharInfo* m_ChNode3 = (CharInfo*)malloc(m_ChList3.size() * sizeof(CharInfo));
    
    strcpy(m_ChNode3->m_Name, "KKK");
    m_ChNode3->m_Job = a_ChNode.m_Job;
    m_ChNode3->m_Level = a_ChNode.m_Level;
    m_ChNode3->m_MaxHp = a_ChNode.m_MaxHp;

    m_ChList3.push_back(m_ChNode3);
    printf("[m_ChNode3] %s : JOB(%d) : Level(%d) : MaxHp(%d) \n", m_ChNode3->m_Name,m_ChNode3->m_Job, m_ChNode3->m_Level, m_ChNode3->m_MaxHp );
    //[m_ChNode3] KKK : JOB(1) : Level(26) : MaxHp(200)


    //동적할당 메모리해제
    if(m_ChList3.size() != NULL)
    {
        free(m_ChNode3);
        m_ChNode3 = NULL;
    }
}