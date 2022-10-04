#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "apple";
    string str2 = "banana";

    //string에 삽입, 추가, 삭제         
    str.append(str2);                                    //str.append(str2) : 
    cout << "str.append(str2) : " << str << "\n";        //str 뒤에 str2 문자열을 이어 붙여줌(+)
    
    str.append(str2, 0, 5);                              //str.append(str2, n, m) : 
    cout << "str.append(str2, n, m) : " << str << "\n";  //str 뒤에 'str2의 n index부터 m개의 문자'를 이어 붙여줌

    str.append(4, 'j');                                  //str.append(n, 'a') :
    cout << "str.append(n, 'a') : " << str << "\n";      //str 뒤에 n개의 'a'를 이어 붙여줌.

    str.clear();                                         //str.clear() : 
    cout << "str.clear() : " << str << "\n";             //저장된 문자열을 모두 지움

    str.assign("apple");                                 //str.assign(str2) : 
    cout << "str.assign(str2) : " << str << "\n";        //str에 str2 문자열을 할당.(변수의 정의와 동일)

    str.insert(4, str2);                                 //str.Insert(n, str2) : 
    cout << "str.insert(n, str2) : " << str << "\n";     //n번째 index 앞에 str2문자열을 삽입함

    str.replace(4, 4, "ttt");                            //str.replace(n, k, str2) : 
    cout << "str.replace(n, k, str2) : " << str << "\n"; //n번째 index부터 k개의 문자를 str2로 대체함.

    str.erase(2, 4);                                     //str.erase(n, m) : 
    cout << "str.erase(n, m) : " << str << "\n";         //n번째 index부터 m개의 문자를 지움

    str.erase();                                         //str.erase() : 
    cout << "str.erase() : " << str << "\n";             //clear와 같은 동작

    str.push_back('a');                                  //str.push_back(c) : 
    cout << "str.push_back(a) : " << str << "\n";        //str의 맨 뒤에 c 문자를 붙여줌
    str.push_back('b');
    cout << "str.push_back(b) : " << str << "\n";

    str.pop_back();                                      //str.pop_back() : 
    cout << "str.pop_back() : " << str << "\n";          //str의 맨 뒤의 문자를 제거
}