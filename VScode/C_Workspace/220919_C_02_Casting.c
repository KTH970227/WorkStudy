#include<stdio.h>

// 형변환 (Casting)
// 1, 자동 형변환
// 자동으로 알아서 형변환 되는 형태(단, 규칙이 있다.)
// 서로 다른 데이터형 연산 시 양변의 타입이 다르면 큰 쪽으로 상승 변환되는 규칙이 있다.
// 데이터형의 크기 순서
// char < unsigned char < short < unsigned short < int < unsigned int 
// < long < unsigned long < float < double

// 2, 수동 형변환(자동 형변환)

int main()
{
	// 1, 자동 형변환 : 서로 다른 데이터형 연산 시 양변의 타입이 다르면 큰 쪽으로 상승 변환되는 규칙
	float a_aa = 5;
	printf("%f\n", a_aa); // 5.0

	int a_bb = 7;
	float a_cc = a_bb;
	printf("%f\n", a_cc); // 7.0

	float hhh = 5 / 2.5f;
	printf("%f\n", hhh); // 2.0

	float a_dd = 5 / 2.0f;
	float a_dd1 = 5.0 / 2;
	float a_dd2 = 5.0f / 2.0f;
	float a_ee = 5 / 2;
	printf("%f : %f : %f : %f\n", a_dd, a_dd1, a_dd2,a_ee); //2.5 : 2.5 : 2.5 : 2

	int ddd = 2.4f;  //<--- 소수점 밑으로 손실이 발생된다.
	float eee = 12.7f;
	ddd = eee;       //<--- 소수점 밑으로 손실이 발생된다.
	printf("%d\n", ddd); // 12
	// 1, 자동 형변환

	// 2, 수동 형변환(자동 형변환)
	float a_hh = 5 / 2.0f;
	float a_gg = 5 / (float)2;
	printf("%f : %f\n", a_hh, a_gg); // 2.5 : 2.5

	float a_pp = 13.456f;
	float a_aaa = 0.0f;     //13.0f
	float a_bbb = 0.0f;     //0.456f
	a_aaa = (int)a_pp;
	a_bbb = a_pp - a_aaa;
	printf("%.1f : %.1f\n", a_aaa, a_bbb); // 13.0 : 0.456
	// 2, 수동 형변환(자동 형변환)

	getchar();

}