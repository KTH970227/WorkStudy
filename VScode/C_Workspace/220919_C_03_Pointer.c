#include<stdio.h>

int main()
{
    // 포인터 : 주소값
    // 포인터 변수 : 주소값을 저장하는 4바이트짜리 변수(무조건 4바이트로 저장 중요)
    // 1, 일반 변수의 주소값은 변수명 앞에 &(앤드마크) 붙여주면 주소값이 된다.
    // 2, 포인터 변수를 이용해서 변수의 내용에 접근하기 위해서는
    //    변수명앞에 * 표시를 붙여주면 된다.
	//---포인터
	// int aaa = 0;
	// printf("&aaa = x : %x\n", &aaa);
	// printf("&aaa = d : %d\n", &aaa);

	int aa = 22;
	int* bb = &aa;
	printf("%d : %d\n", &aa, bb); // &aa주소값 : bb주소값 (똑같은 값이 나온다.)
	printf("%d\n", *bb);          // 22 //*bb : 주소의 값(내용)을 가져온다.

	*bb = 33;
	printf("%d : %d\n", *bb, aa); // 33 : 33

	int* ee;
	ee = &aa;
	printf("%d : %d : %d\n", aa, *bb, *ee);// 33 : 33 : 33

	*ee = 777;
	printf("%d : %d : %d\n", aa, *bb, *ee);// 777 : 777 : 777

	int ggg = 1;
	printf("%d\n", &ggg); //ggg주소값

	int* a_pp1 = &ggg;
	int* a_pp2 = &ggg;
	int* a_pp3 = &ggg;

	ggg = 55;
	printf("%d : %d : %d : %d\n", ggg, *a_pp1, *a_pp2, *a_pp3); //55 : 55 : 55 : 55

	short pp = 77;
	short* qq = &pp;
	printf("(%lu) : %d : %d\n", qq, sizeof(short), sizeof(short*)); // (qq주소값) : 2 : 8

	char ii = 12;
	char* jj = &ii;
	printf("(%lu) : %d : %d\n", jj, sizeof(char), sizeof(char*)); //(jj주소값) : 1 : 8
	

    // 포인터와 배열의 관계
    // 배열에서는 배열의 이름이 배열의 첫번째 변수의 주소를 의미한다.

    //int a_vvv[5] = {0};
    // 주소접근.
    //  &a_vvv[0]    &a_vvv[1]    &a_vvv[2]   
    // (a_vvv + 0)  (a_vvv + 1)  (a_vvv + 2)
    //  a_vvv

    // 내용(값)접근.
    // *(a_vvv + 0) *(a_vvv + 1) *(a_vvv + 2)  

    //int* a_ppp = a_vvv;

	//----포인터와 배열의 관계
	int a_vvv[5] = { 0 };
	a_vvv[1] = 11;
	a_vvv[2] = 22;
	a_vvv[3] = 33;
	a_vvv[4] = 44;
	
	printf("a_vvv[x] = %lu : %d : %d\n", a_vvv, a_vvv[1], *(a_vvv + 2)); // a_vvv주소값 : 11 : 22

	*(a_vvv + 1) = 111;
	*(a_vvv + 2) = 222;
	*(a_vvv + 3) = 333;
	*(a_vvv + 4) = 444;
	
	printf("*(a_vvv + x) = %lu : %d : %d\n", a_vvv, a_vvv[1], *(a_vvv + 2)); // a_vvv주소값 : 11 : 22



	int* a_ppp = a_vvv; // == &a_vvv[0];
	*(a_ppp + 2) = 111;
	printf("%d : %d\n", a_vvv[2], a_ppp[2]); // 111 : 111

	for (int aa = 0; aa < 5; aa++)
	{
		a_ppp[aa] = 10 + aa;
		printf("%d : %d\n", a_vvv[aa], a_ppp[aa]);
		//10 : 10
		//11 : 11
		//12 : 12
		//13 : 13
		//14 : 14
	}

	getchar();
}