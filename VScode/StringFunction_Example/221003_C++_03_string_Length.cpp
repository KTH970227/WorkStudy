#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "KimTaeHyoung";

    //string의 크기
    cout << "str.length() : " << str.length() << "\n";            //str.length() : 문자열 길이 반환(문자열의 길이를 나타냄)

    cout << "str.size() : " << str.size() << "\n";                //str.size() : 문자열 길이 반환(메모리에서 실제 사용되는 크기를 나타냄)

    cout << "str.capacity() : " << str.capacity() << "\n";        //str.capacity() : 문자열이 사용중인 메모리 크기 반환

    str.resize(6);                                                //str.resize(n) : string을 n의 크기로 만듦. 
    cout << "str.resize(index) : " << str << "\n";                //                문자열의 길이보다 n이 작으면 남은 부분 삭제, 크다면 빈공간으로 채움
    
    str.resize(8, 'F');                                           //str.resize(n, 'a') : n이 string의 길이보다 더 크다면,
    cout << "str.resize(index, char) : " << str << "\n";          //                     빈 공간을 'a'로 채움.
   
    str.reserve(20);                                              //str.reserve(n) : size = n만큼의 메모리를 미리 할당해줌.
    cout << "str.reserve(index) : " << str.capacity() << "\n";                       
    
    str.shrink_to_fit();                                          //"str.shrink_to_fit() : string의 capacity가 실제 사용하는 메모리보다 더 큰 경우
    cout << "str.shrink_to_fit() : " << str.capacity() << "\n";   //                       낭비되는 메모리가 없도록 메모리를 줄여줌.
    
    cout << "str.empty() : " << str.empty() << "\n";              //str.empty() : str이 빈 문자열인지 확인
}