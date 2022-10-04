#include <stdio.h>

//문자열을 다루는 함수

int main()
{
	char a_ch = 'A'; //문자 하나 저장하는 예(문자 하나는 따옴표하나로 감싸준다.)
	printf("%d  %c\n", a_ch, a_ch);

	printf("안녕하세요\n");//문장 또는 문자열(쌍따옴표로 감싸주면 문자열)
	printf("%s\n", "안녕하세요 서울");

	int a_xx[5] = { 11, 12, 5, 7, 8 };          //문자열은 배열로 저장해야 한다.
	char a_Str[6] = { 'k', 'o', 'r', 'e', 'a' };
	char a_Sss[6] = "korea";
	printf("%s : %s\n", a_Str, a_Sss);

	//----------C, C++ 언어에서는 문자열 끝에 '\0'(널문자) 문자가 있어야만 문자열로 인식한다.
	char a_aaa[10];
	a_aaa[0] = 'k';
	a_aaa[1] = 'o';
	a_aaa[2] = 'r';
	a_aaa[3] = 'e';
	a_aaa[4] = 'a';
	a_aaa[5] = '\0';

	char a_bbb[10] = "korea";                //문자열은 '\0'(널문자)가 자동으로 추가된다.

	printf("a_aaa = %s\n", a_aaa);
	printf("a_bbb = %s\n", a_bbb);

	char a_ii[] = "student";
	printf("student size : %lu\n", sizeof(a_ii));

	//C, C++ 에서 영문은 한글자당 1byte를 차지한다.
	//한글이나 한자의 경우 한글자당 2byte를 차지한다.
	printf("%d : %d\n", sizeof("korea"), sizeof("반가워요.")); // 6 : 10

	int aaee = 11; // 11 <--- 상수
	//"korea" = "hi"; //<---문자열 상수

	//문자를 저장하는 법
	
	//1,힙
	const char* abstr = "korea"; 
    //2,스택
	char cdstr[] = "seoul";	//별도의 메모리가 생성되고 각 값이 복사되는 개념, 배열로 게별적인 접근이 가능하다.
	//cdstr = { 'J','e','j','u' };//cdstr[] = "Jeju";

	printf("%s : %s\n", cdstr, abstr); //seoul : korea

	//abstr[1] = 'A';//에러난다. -- 메모리상태가 문자열상수로 잡히고 첫번째 주소값이 저장되는 형태
	cdstr[1] = 'A';

	printf("%s : %s\n", cdstr, abstr);//sAoul : korea

	abstr = "Busan"; //문자열상수 : 주소값 변경은 가능하다.
	//cdstr = "Jeju";//에러난다. -- 메모리상태가 문자열상수로 잡히고 첫번째 주소값이 저장되는 형태

	printf("%s : %s\n", cdstr, abstr);//sAoul : Busan

	getchar();
}