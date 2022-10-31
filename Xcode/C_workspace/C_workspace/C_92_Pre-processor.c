#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>

//전처리기 -> 컴파일러 -> 링커 -> 실행파일

//전처리가 해주는 일
//-컴파일러가 이해할 수 있도록 번역
//-프로그래머의 효율을 높여주는 기능들
//-코드를 다양하게 컴파일

int main()
{
	// [Zc:trigraphs] : 속성 - C/C++ - Command Line - Additional Options - /Zc:trigraphs 입력
	// Trigraph     Replacement
	// ??=          #
	// ??/          \
	// ??'          ^
	// ??(          [
	// ??)          ]
	// ??!          |
	// ??<          {
	// ??>          }
	// ??-          ~

	int arr[3] = { 1, 2, 3 };
	printf("arr??(0??) == %d\n", arr ?? (0??));
	//printf("arr[0] == %d\n", arr[0]);


	// [Digraphs]
	// Digraph     Equivalent
	// <:          [
	// :>          ]
	// <%          {
	// %>          }
	// %:          #

	printf("arr<:1:> == %d\n", arr<:1:>);
	//printf("arr[1] == %d\n", arr[1]);


	// [Tokens]
	int /*a variable to count a number*/n = 1;
	// int n = 1;

	return 0;
}