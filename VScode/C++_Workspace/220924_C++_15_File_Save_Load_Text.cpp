#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
#pragma warning(disable:4996)

//파일 저장 로딩 : txt 파일 저장 로딩 예제

void main()
{
	int a_ii[5] = { 0 };
	char a_InStr[128] = { '\0' };

	while (true)
	{
		cout << "1, 파일로딩  2, 파일저장  3,값 출력해보기";
		int a_Sel = 0;
		cin >> a_Sel;
		getchar();

		if (a_Sel == 1)//1, 파일로딩
		{
			FILE* a_fFP = fopen("MySave.txt", "rt"); //"rt" = MySave.txt를 읽기전용으로 열겠다.
			
			if (a_fFP != NULL)//파일이 존재하고, 파일포인터로 잘 로딩 되었다.
			{
				fscanf(a_fFP, "%d %d %d %d %d",
					&a_ii[0], &a_ii[1], &a_ii[2], &a_ii[3], &a_ii[4]);

				fscanf(a_fFP, "%s\n", a_InStr);

				fclose(a_fFP); //fopen() 항로로 정상적으로 a_fFP 열었으면 닫아줘야함.

				cout << "\"MySave.text\" 파일이 정상적으로 로딩되었습니다." << endl;
			}
		}
		else if (a_Sel == 2)//2, 파일저장 
		{
			//------값셋팅
			a_ii[0] = 35;
			a_ii[1] = 67;
			a_ii[2] = 200;
			a_ii[3] = 21;
			a_ii[4] = 89;

			strcpy(a_InStr, "hi아기상어");
			//------값셋팅

			//------파일저장
			FILE* a_wFP = fopen("MySave.txt", "wt");
			//텍스트 쓰기 모드로 생성해서 파일포인터로 열어줘...

			if (a_wFP != NULL)
			{
				fprintf(a_wFP, "%d %d %d %d %d",
					a_ii[0], a_ii[1], a_ii[2], a_ii[3], a_ii[4]);

				fprintf(a_wFP, "%s", a_InStr);
				fclose(a_wFP);

				cout << "\"MySave.text\" 파일이 정상적으로 저장되었습니다." << endl;
			}
			else
			{
				cout << "\"MySave.text\" 파일이 존재하지 않습니다." << endl;
			}
		}
		else if (a_Sel == 3)//3,값 출력해보기
		{
			for (int i = 0; i < 5; i++)
			{
				cout << a_ii[i] << endl;
			}
			cout << a_InStr << endl;
		}
		getchar();
		system("cls");
	}
}