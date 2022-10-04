#include <stdio.h> //C언어에서 제공해주는 것은 <>
#include "220918_C_Function2.c"
// #include <iostream>
// #include <vector>
// #include <string>

//using namespace std;

int main()
{
	// vector<string> msg {"A", "B", "C", "D", "E"};

	// for(const string& word : msg)
	// {
	// 	cout << word << " ";
	// }
	// cout << endl;	



	int Result = Max(45, 70);
	printf("%d\n", Result);

	int ccc = Plus(11, 22);
	int ppp = Minus(ccc, 5);
	printf("결과 : %d, %d\n", ccc, ppp);

	getchar();
}