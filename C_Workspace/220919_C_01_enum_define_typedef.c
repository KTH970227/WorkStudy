#include<stdio.h>

//enum, #define, typedef

//1, enum <-- C++에서 사용가능
//소스의 가독성을 높이기위해 정수형 대신 사용되는 별칭 집합.
//모던 C++ 에서는 enum 형을 이렇게도 사용한다.
// enum class GawiBawiBo {	Gawi = 1,	Bawi = 2,	Bo = 3 };
// enum class ABC 		  { A = 1,	B = 2,	C = 3 };

//2, #define
// # //<--전처리문 : 컴파일 시점에 실행되는 구문.
// #define : 전처리문으로 컴파일 시점에 매크로를 실제값으로 단순 치환해 주는 키워드이다.
// #define 매크로명 실제값. //숫자뿐만 아닌 다른 것도 유용하게 사용된다.
#define MACH 1200.0
#define TEST 1234
// 장점 : 속도가 미세하게 더 빠르다  /  단점 : 디버그 시 값을 추적하기 힘들다.

//3, typedef
// typedef는 기존에 존재하는 자료형에 새로운 별명을 부여할 때 사용되는 "선언지정자"
// 변수 사용 예
typedef unsigned int UINT; //unsigned을 UINT로 재정의해서 사용하겠다.
typedef float FLOAT;

int main()
{
	//1, enum <-- C++에서 사용가능
	// GawiBawiBo a_Val = GawiBawiBo::Bawi;
	// ABC a_Val2 = ABC::C;

	// //GawiBawiBo a_Val = (GawiBawiBo)2;
	// printf("GawiBawiBo : %d\n", (int)a_Val);  // 2
	// printf("ABC : %d\n", (int)a_Val2); 		  // 3



	//2, #define
	float xxx = 7.0f;
	float yyy = xxx * 1.2f;
	printf("yyy : %f\n", yyy); // yyy : 8.400001

	float aaa = MACH * 23.0f;
	float bbb = MACH / 4.0f;
	printf("MACH = aaa : %f / bbb : %f\n", aaa, bbb); // MACH = aaa : 27600.000000 / bbb : 300.000000

	int xxx2 = 5;
	int yyy2 = xxx2 * 12;
	printf("yyy2 : %d\n", yyy2); // yyy2 : 60

	int aaa2 = TEST * 23;
	int bbb2 = TEST / 4;
	printf("TEST = aaa2 : %d / bbb2 : %d\n", aaa2, bbb2); // TEST = aaa2 : 28382 / bbb2 : 308


	//3, typedef
	unsigned int aabb = 0;
	UINT ccdd = 2;
	printf("UINT = %d\n", ccdd);  // 2


	float ffff = 0.2f;
	FLOAT fff2 = 2.0f;
	printf("FLOAT = %f\n", fff2); // 2.000...

	getchar();
}