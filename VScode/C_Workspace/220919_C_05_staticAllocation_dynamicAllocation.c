#include <stdio.h>
#include <stdlib.h>

//정적할당 : 프로그램 실행전에 메모리 사이즈가 확정되는 것.

//동적할당 : 프로그램 실행되고 난 후에 메모리 사이즈를 필요한 만큼 얻어올 수 있는 것.
// C언어 : malloc() ... free() 를 사용한다. : free(메모리해제) 안할 시 메모리 누수가 된다.
// C++언어 : new : delete  를 사용한다.
int main()
{
	//----정적할당
	int aaa = 0;
	int bbb[100] = { 0 };

	//int a_Total = 0;
	//int a_Jumsu[5] = { 0 };
	//int a_StNum = sizeof(a_Jumsu) / sizeof(a_Jumsu[0]);
	//for (int i = 0; i < a_StNum; i++)
	//{
	//	printf("%d번 학생 점수를 입력해 주세요 : ",i + 1);
	//	scanf_s("%d", &a_Jumsu[i]);
	//	getchar();

	//	a_Total = a_Total + a_Jumsu[i];
	//}

	//printf("\n<학생 리스트>\n");
	//for (int i = 0; i < a_StNum; i++)
	//{
	//	printf("%d번 학생 점수 : %d\n", i + 1, a_Jumsu[i]);
	//}
	//printf("\n학생수 : %d 반평균 : %d", a_StNum, (a_Total / a_StNum));
	//getchar();

	//----정적할당


	//----동적할당
	int a_StNum = 0;
	scanf("%d", &a_StNum);
	getchar();
	//int a_Jumsu[a_StNum] = { 0 }; //<---배열은 정적할당 밖에 할 수 없다. 에러난다.

	int* a_Jumsu = (int*)malloc(a_StNum * sizeof(int));// <--- 동적할당 #include <stdlib.h>
	int a_Total = 0;

	for (int i = 0; i < a_StNum; i++)
	{
		printf("%d번 학생 점수를 입력해 주세요 : ", i + 1);
		scanf("%d", &a_Jumsu[i]);
		getchar();

		a_Total = a_Total + a_Jumsu[i];
	}

	printf("\n<학생 리스트>\n");

	for (int i = 0; i < a_StNum; i++)
	{
		printf("%d번 학생 점수 : %d\n", i + 1, a_Jumsu[i]);
	}

	printf("\n학생수 : %d / 반평균 : %d\n", a_StNum, (a_Total / a_StNum));

	//malloc : free
	if (a_Jumsu != NULL)//<--- 안전한 메모리 해제 방법.
	{
		free(a_Jumsu); // <---메모리 해제 : malloc과 짝이고 시스템에 메모리를 돌려주는 함수. 중복X
		a_Jumsu = NULL;
	}

	int abc = 999;
	a_Jumsu = &abc;

	//정적 후에는 free 하면 안됨.
	//if (a_Jumsu != NULL)//<--- a_Jumsu가 정적할당의 주소를 갖고 있다면
	//{
	//	free(a_Jumsu); // <--- free하면 안된다.
	//	a_Jumsu = NULL;
	//}

	a_Jumsu = (int*)malloc(3 * sizeof(int));
	a_Jumsu[0] = 56;
	a_Jumsu[1] = 87;
	a_Jumsu[2] = 69;

	for (int i = 0; i < 3; i++)
	{
		printf("a_Jumsu[%d] : %d\n", i, a_Jumsu[i]);
	}
	if (a_Jumsu != NULL)
	{
		free(a_Jumsu); 
		a_Jumsu = NULL;
	}
	//----동적할당
	getchar();
}