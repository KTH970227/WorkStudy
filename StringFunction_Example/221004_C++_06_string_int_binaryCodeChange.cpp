#include <stdio.h>
#include <string>
#include <iostream>
#include <bitset>

using namespace std;

string sToBinary(string const &str)
{
    string binary = "";
    for(char const &c: str) //str의 별칭 c에 복사하여 사용 
    {
        binary += bitset<8>(c).to_string() + ' ';
    }
    return binary;
}

int iToBinary(unsigned int n)
{
    if(n / 2 != 0)
    {
        iToBinary(n / 2);
    }

    cout << n % 2;
}
int main()
{
    string str = "kimTaeHyoung";

    string binary = sToBinary(str);
    cout << binary << endl;

    unsigned int decimal = 65;

    iToBinary(decimal);

    return 0;
}