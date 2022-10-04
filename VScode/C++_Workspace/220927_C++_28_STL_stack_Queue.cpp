#include <stdio.h>
#include <stack>		//<--- 스택
#include <queue>		//<--- 큐
#include <iostream>

using namespace std;

// STL : 자료구조를 쉽게 사용할 수 있도록 만들어 놓은 라이브러리
// 스택
// 스택의 주 용도(임시 저장소)
// - 카드 게임 같은데서 카드가 쌓여 있다가 위에서부터 뒤접어 보는 경우

// 큐
// 버퍼로 많이 사용된다.
// - 채팅 같은 경우 한번에 채팅이 밀려 들어올 때 버퍼에 쌓아 두었다가 한줄씩
// 화면에 출력하는 경우에 사용된다.
// 파일로딩 버퍼나 에세번들(패치 시스템)에서 버퍼로 많이 사용된다.

void main()
{
	//------- 스택
	stack<int> stList; 
	stList.push(10);  //스택에 등록
	stList.push(20);
	stList.push(30);

	while (stList.empty() == false) //스택이 비어 있지 않은 경우 while문 실행
	{
		cout << stList.top() << endl;	//스택에서 제일 위의 요소를 가져오는 방법
		stList.pop();			//스택 제일 위의 요소를 제거하기...
	}

	// 30
	// 20
	// 10
	//------- 스택

	cout << endl;

	//------- 큐
	queue<char> a_quh;
	a_quh.push('A');
	a_quh.push('B');
	a_quh.push('C');

	while (!a_quh.empty()) //<--(a_quh.empty() == false)
	{ //큐가 비어 있지 않은 경우 while문 실행
		cout << a_quh.front() << endl; //큐 제일 먼저 들어간 요소를 가져오는 방법
		a_quh.pop();	//큐 제일 먼저 들어간 요소를 제거하기...
	}

	// A
	// B
	// C
	//------- 큐

	cin.get();
}