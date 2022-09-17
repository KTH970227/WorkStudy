#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)
typedef int bool;
#define true 1
#define false 0

// 함수
// 리턴형 함수명(데이터형 매개변수, 데이터형 매개변수, ...)
// {
//		실행코드
// }

// C언어에서 함수 3가지 구성 : 선언, 정의, 호출(실행)로 구현한다.

int Sum(int a, int b);  //<-- 함수의 선언 (미리보기)
// C언어에서는 함수를 호출하기 전에 우선 함수의 선언이나 정의가 되어 있어야 한다.

// 함수의 패턴
// 1, 리턴형, 매개변수 모두 존재하는 형태
int Add(int a, int b) //함수의 선언을 생략하면 함수의 정의가 선언의 역할까지 한다.
{
	int c = a + b;
	return c;
}

// 2, 리턴형은 없고 매개변수는 있는 형태
void MySum(int a, int b)
{
	int c = a + b;

	if (100 > c)	
		return;		//<-- void 리턴형에서 return; 이라고 쓰면 함수를 즉시 빠져 나가게 된다.

	printf("a(%d) + b(%d) = c(%d)\n", a, b, c);
}

float Velocity = 0.0f;

// 3, 리턴형은 있고 매개변수는 없는 형태
bool IsMove()
{
	if (Velocity <= 0.0f)
		return false;

	return true;
}

// 4, 리턴형도 없고 매개변수도 없는 형태
void PrintGuGuDan()
{
	while (true)
	{
		printf("출력할 구구단의 단을 입력해 주세요.(999 종료) : ");

		int Dan = 0;
		scanf("%d", &Dan); // #pragma warning(disable: 4996)
		getchar();

		if (Dan < 2 || 9 < Dan)
		{
			if (Dan == 999)
				return;

			continue;
		}

		printf("<구구단 %d단>\n", Dan);
		for (int ii = 1; ii < 10; ii++)
		{
			printf("%d * %d = %d\n", Dan, ii, Dan * ii);
		}

		printf("Enter 입력시 프로그램 계속 진행...");
		getchar();
		system("cls"); // #include <stdlib.h>

	}//while (true)
}

void main()
{
	int aaa = Sum(22, 34);		//<-- 함수의 호출(실행)

	int bbb = Sum(111, 222);	//<-- 함수의 호출(실행)

	int ccc = Sum(123, 333);	//<-- 함수의 호출(실행)

	printf("%d : %d : %d\n", aaa, bbb, ccc);

	int ddd = Add(555, 666);
	printf("%d\n", ddd);

	MySum(123, 567);

	bool Result = IsMove();
	if (Result == true)
		printf("움직이고 있어\n");
	else
		printf("멈춰 있어\n");

	PrintGuGuDan();

	getchar();
}

int Sum(int a, int b)   //<-- 함수의 정의 (설계도)
{
	int c = a + b;
	for (int ii = 0; ii < 10; ii++)
	{
		c += ii;
	}

	//...

	return c;
}