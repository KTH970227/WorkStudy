#include <stdio.h>
#include <iostream>
#include <string>
#include <ctype.h>
#include <cctype>

using namespace std;

int main()
{
    string str = "apple";
    string str2 = "banana";

    //기타 유용한 string 멤버 함수
    cout <<  "str.find(abcd) : " << str.find("pl") << "\n";          //str.find("abcd") :
                                                                     //"adcd"가 str에 포함되어 있는지를 확인.
                                                                     //찾으면 해당부분의 첫번째 index를 반환.

    cout <<  "str.find(abcd, n1) : " << str.find("pl", 1) << "\n";   //str.find("abcd", n) :
    cout <<  "str.find(abcd, n2) : " << str.find("pl", 2) << "\n";   //n번째 index부터 "abcd"를 find

    cout <<  "str.substr() : " << str.substr() << "\n";              //str.substr() :
                                                                     //str 전체를 반환

    cout <<  "str.substr(n) : " << str.substr(1) << "\n";            //str.substr(n) :
                                                                     //str의 n번째 index부터 끝까지의 문자를 부분문자열로 반환

    cout <<  "str.substr(n, k) : " << str.substr(1, 2) << "\n";      //str.substr(n, k) :
                                                                     //str의 n번째 index부터 k개의 문자를 부분문자열로 반환

    cout <<  "str.compare(str2) : " << str.compare(str2) << "\n";    //str.compare(str2) : 
                                                                     //str과 str2가 같은지를 비교.
                                                                     //같아면 0, str < str2인 경우 음수, str > str2인 경우 양수를 반환

    swap(str, str2);                                                 //swap(str1, str2) : 
    cout << "swap1(str1, str2):str = "<<str<<", str2 = "<<str2<<"\n";//str1과 str2를 바꿔줌. //reference를 교환하는 방식
    swap(str, str2);                                                              
    cout << "swap2(str1, str2):str = "<<str<<", str2 = "<<str2<<"\n";


    string istr = "123abc";

    cout << "isdigit(c) : " << isdigit(istr[1]) << "\n";             //isdigit(c) :
                                                                     //c 문자가 숫자이면 true, 아니면 false를 반환

    cout << "isalpha(c) : " << isalpha(istr[4]) << "\n";             //isalpha(c) :
                                                                     //c 문자가 영어이면 true, 아니면 false를 반환

    string lowerStr = "abcd";    //+32 소문자
    string upperStr = "ABCD";    //-32 대문자

    lowerStr[0] = toupper(lowerStr[0]);            //toupper(c) :
    cout << "toupper(c) :" << lowerStr << "\n";      //c 문자를 대문자로 변환

    for(int i = 0; i < lowerStr.length(); i++)       //전부 대문자로 변환하기
    {
        lowerStr[i] = toupper(lowerStr[i]);
        cout << "All toupper : " << "[" << i << "] : " << lowerStr[i] << "\n";
    }
    
    upperStr[0] = tolower(upperStr[0]);              //tolower(c) :
    cout << "tolower(c) : " << upperStr << "\n";     //c 문자를 소문자로 변환 

    for(int i = 0; i < upperStr.length(); i++)
    {
        upperStr[i] = tolower(upperStr[i]);
        cout << "All tolower : " << "[" << i << "] : " << upperStr[i] << "\n";
    }
}