#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "KimTaeHyoung";

    cout << "str.at : " << str.at(11) << "\n";       //str.at(index) : index의 위치에 문자 반환. 유효한 범위인지 체크 O
    cout << "str[index] : " << str[11] << "\n";      //str[index] :  index의 위치에 문자 반환. 유효한 범위인지 체크 X, at보다 접근속도가 빠름.
    cout << "str.front() : " << str.front() << "\n"; //str.front() : 문자열 가장 앞의 문자 반환.
    cout << "str.back() : " << str.back() << "\n";   //str.back() : 문자열 가장 뒤 문자 반환.
}