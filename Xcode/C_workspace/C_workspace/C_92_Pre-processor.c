#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>

//��ó���� -> �����Ϸ� -> ��Ŀ -> ��������

//��ó���� ���ִ� ��
//-�����Ϸ��� ������ �� �ֵ��� ����
//-���α׷����� ȿ���� �����ִ� ��ɵ�
//-�ڵ带 �پ��ϰ� ������

int main()
{
	// [Zc:trigraphs] : �Ӽ� - C/C++ - Command Line - Additional Options - /Zc:trigraphs �Է�
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