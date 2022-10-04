#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "1000";
    int i = 2333;

    int i2 = stoi(s);
    //stod = double, stol = long
    cout << "i2 : " << i2 << "\n";

    string s2 = to_string(i);

    cout << "s2 : " << s2 << "\n";
}