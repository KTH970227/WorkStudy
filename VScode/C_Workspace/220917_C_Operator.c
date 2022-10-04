#include<stdio.h>
typedef int bool;
#define true 1
#define false 0

// 연산자
// 1, 수식연산자 +, -, *, /, %
// 2, 증감연산자 ++, --
// 3, 할당연산자 =, +=, -=, *=, /=, %=
// 4, 관계연산자 <, >, ==, !=, <=, >=
// 5, 논리연산자 &&, ||, !
// 6, 비트연산자 &, |, ^
// 7, 쉬프트연산자 >>, <<

void main()
{
	//1, 수식연산자 +, -, *, /, %
	int a = 55, b = 5;
	int cc = a + b;		//더하기
	cc = a - b;			//빼기
	cc = a * b;			//곱하기
	cc = a / b;			//나누기
	cc = a % b;			//나머지 연산자


	//2, 증감연산자 ++, --
	int dd = 0;
	dd++;		//dd = dd + 1;
	++dd;		//dd = 1 + dd;
	printf("%d\n", dd);

	int xx = 0;
	printf("xx = %d\n", xx++);
	xx = 0;
	printf("xx = %d\n", ++xx);

	int ee = 10;
	ee--;		//ee = ee - 1;
	--ee;
	printf("%d", ee);

	int yy = 10;
	printf("yy = %d\n", yy--);
	yy = 10;
	printf("yy = %d\n", --yy);


	//3, 할당연산자 =, +=, -=, *=, /=, %=
	int a_gg = 10;
	a_gg += 5;		// a_gg = a_gg + 5;
	a_gg -= 5;		// a_gg = a_gg - 5;
	a_gg *= 5;		// a_gg = a_gg * 5;
	a_gg /= 5;		// a_gg = a_gg / 5;
	a_gg %= 5;		// a_gg = a_gg % 5;


	//4, 관계연산자 <, >, ==, !=, <=, >=
	int iii = 50;
	int ppp = 60;
	bool rrr = (iii < ppp);		//true
	printf("%d\n", rrr);		// 1

	rrr = iii > ppp;			//false
	printf("%d\n", rrr);		// 0

	rrr = iii == ppp;			//false
	printf("%d\n", rrr);		// 0

	rrr = iii != ppp;			//true
	printf("%d\n", rrr);		// 1

	rrr = iii >= ppp;			//false
	printf("%d\n", rrr);		// 0

	rrr = iii <= ppp;			//true
	printf("%d\n", rrr);		// 1


	//5, 논리연산자 &&, ||, ! 
	// && = 둘다 true이여야 결과값이 true,한쪽이라도 false라면 결과값은 false
	int ggg = 50;
	int hhh = 60;
	bool abc = (ggg > 40 && hhh > 50);//AND, ~이고, 그리고 // true
	printf("(ggg > 40 && hhh > 50) == %d\n", abc);		// 1
	// true && true = true
	// true && false = false
	// false && true = false
	// false && false = false

	// || = 한쪽이라도 true라면 결과값은 true, 둘다 false이라면 false
	abc = (ggg > 40 || hhh > 70); // OR, 또는, ~이거나 //true
	//true || true = true
	//true || false = true
	//false || true = true
	//false || false = false

	// ! = true를 false로, false를 true로
	abc = !(ggg < hhh); // false
	printf("abc : %d\n", abc);		// false
	abc = !abc;
	printf("abc : %d\n", abc);		// true
	abc = !abc;
	printf("abc : %d\n", abc);		// false
	abc = !abc;
	printf("abc : %d\n", abc);		// true


	//6, 비트연산자 &, |, ^
	// &
	int nnn = 5;	//0101
	int mmm = 10;	//1010

	int eee = nnn & mmm; // 0101 & 1010 = 0000 -> 0
	printf("nnn & mmm = %d\n", eee);

	// |
	eee = nnn | mmm; // 0101 | 1010 = 1111 -> 15
	// eee = nnn & 13(1101); //2번째 불을 끈다.
	printf("nnn | mmm = %d\n", eee);

	// ^(XOR) : 두 값이 같으면 0, 다르면 1
	eee = nnn ^ mmm; // 0101 ^ 1010 = 1111 -> 15
	printf("nnn ^ mmm = %d\n", eee);

	int kkk = 2367;
	int a_SelVal = kkk ^ 8765;
	printf("a_SelVal = %d\n", a_SelVal);
	int a_MyVal = a_SelVal ^ 8765;
	printf("a_MyVal = %d\n", a_MyVal);


	//7, 쉬프트연산자 >>, <<
	int vvv = 616;				//1001101000
	int zzz = vvv << 4;			// <---- 10011010000000 : 왼쪽으로 4칸으로 이동.(늘어난다.)
	printf("zzz = %d\n", zzz);  // 9,856
	int uuu = vvv >> 4;         // ----> 100110 : 오른쪽으로 4칸 이동.(짤리게 된다.)
	printf("uuu = %d\n", uuu);  // 38

	getchar();
}