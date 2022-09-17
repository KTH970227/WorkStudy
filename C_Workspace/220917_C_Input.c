#include <stdio.h>
#pragma warning(disable: 4996) // <--- scnaf()라는 함수를 사용하기 위한 용도

// 입력문
// scanf()
// scanf_s()

int main()
{
    //int aaa = 0;
	//scanf("%d", &aaa);
	//getchar(); // <--- Enter 값을 받아서 버릴 용도로
	//printf("%d\n", aaa);
	
	//정수입력
	printf("정수값 하나를 입력해 주세요 : "); //안내문구출력
	int bbb = 0;
	int xxx = 0;
	scanf("%d %d", &bbb, &xxx);//입력하기 전까지 대기 / 정수값을 입력 시 bbb의 담아준다.
	getchar(); // <--- Enter 값을 받아서 버릴 용도로
	printf("bbb = %d  xxx = %d\n", bbb, xxx);

	//문자입력
	printf("문자 하나를 입력해 주세요 : ");
	char ccc = ' ';
	char cc2 = ' ';
	scanf("%c %c", &ccc, &cc2);
	getchar(); // <--- Enter 값을 받아서 버릴 용도로
	printf("ccc = %c  cc2 = %c\n", ccc, cc2);

	//실수입력
	printf("실수값 하나를 입력해 주세요 : ");
	float fff = 0.0f;
	float ff2 = 0.0f;
	scanf("%f %f", &fff, &ff2);
	getchar(); // <--- Enter 값을 받아서 버릴 용도로
	printf("fff = %.2f  fff = %.2f\n", fff, ff2);// %.2f = 소수점 둘째자리까지 출력하라는 뜻

	getchar();// <--- 결과값을 확인하고 대기하기 위한 용도
}