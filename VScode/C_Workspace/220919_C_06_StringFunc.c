#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable: 4996)

int main()
{
	//<<<<<<<<<<<<<<<<<<<문자열을 다루는 함수>>>>>>>>>>>>>>>>>//

	//1, strcpy() : 문자열을 char형 배열의 주소값에 복사하는 함수.
	//int aabb = 12;
	//aabb = 34;	
	//int ccdd = aabb;

	char a_ss[128] = "seoul";
	//a_ss = "Busan";
	strcpy(a_ss, "Busan"); //복사 : #include <string.h>
	printf("%s\n", a_ss); //Busan

	strcpy(a_ss, "Jeju");
	printf("%s\n", a_ss); //Jeju

	char a_ee[128] = { '\0' };
	strncpy(a_ee, "HiSeoul", 3); //3개까지 복사해달라.
	//a_ss[0] = 'H';
	//a_ss[1] = 'i';
	//a_ss[2] = 'S';
	//a_ss[3] = '\0';
	printf("%s\n", a_ee); //HiS
	//---------------------------------------1, strcpy()



	//2, strcat() : 문자열과 문자열을 합쳐줄 때 사용하는 함수.
	//char a_dd[128] = "반가워요" + "Seoul"; //안됨.
	char a_dd[128] = { '\0' }; // 초기화하는 방법
	strcat(a_dd, "반가워요 "); // = strncpy(a_dd, "반가워요"); // 같은 결과
	strcat(a_dd, "Seoul"); 
	printf("%s\n", a_dd); //반가워요 Seoul

	//strcpy(a_dd, ""); // 초기화하는 방법2
	a_dd[0] = '\0';   // 초기화하는 방법3
	printf("초기화 결과 : %s\n", a_dd); // 아무것도 안나옴.
	strcat(a_dd, "오늘은 좋은 날입니다.");
	printf("%s\n", a_dd); //오늘은 좋은 날입니다.
	//----------------------------------------2, strcat()



	//3, strcmp() : 문자열을 비교할 때 사용하는 함수
	//char abc[] = "23";
	//if (abc == "23") //문자 비교가 아닌 주소값으로 비교되서 실행되지 않는다.
	//{
	//	printf("%s\n", abc);//아무것도 안나옴.
	//}

	char a_Nas[128] = "Korea";
	if (strcmp(a_Nas, "Korea") == 0) //일치하다면.
	{
		printf("일치 = %s\n", a_Nas);
	}

	////간단한 퀴즈게임.
	//char capital[16] = { '\0' };
	//printf("우리나라의 수도는? : ");
	//scanf("%s\n", capital);

	//if(strcmp(capital,"서울") == 0)
	//{
	//	printf("정답입니다.\n\n");
	//}
	//else
	//{
	//	printf("틀렸습니다.\n\n");
	//}
	//-----------------------------------------3, strcmp()
	
	//4, strchr() : 문자열에 특정한 글자 하나가 들어가 있는 검색해 주는 함수.
	char a_fstr[16] = "HiStudent";
	char* a_ret = strchr(a_fstr, 't');// == &a_fstr[3] == (a_fstr + 3)
	if (a_ret != NULL)
	{
		printf("%s\n",a_ret);
	}

	char FineName[] = "Mypic.png";
	char* Find = strchr(FineName, '.');
	if (Find != NULL) //.뒤에 날라간다.
	{
		Find[0] = '\0';
	}
	printf("%s\n", FineName);
	//-----------------------------------------4, strchr()
	

	//5, strstr() : 문자열에 특정한 문자열이 들어가 있는지? 검색해주는 함수.
	//char a_Capital[128];
	//printf("우리나라의 수도는 ? : ");
	//scanf("%s", a_Capital, sizeof(a_Capital));
	//getchar();
	//char* a_Res = strstr(a_Capital, "서울");//서울이라는 단어가 들어있는지 아닌지.
	//if (a_Res != NULL)
	//{
	//	printf("정답입니다.\n\n");
	//}
	//else
	//{
	//	printf("틀렸습니다.\n\n");
	//}
	//-----------------------------------------5, strstr()

	//6, strset() : 변수에 담겨 있는 문자열의 값을 모두 특정한 문자 값으로 치환해 주는 함수.
	// 문자를 모두 초기화할 때 많이 사용한다.
	char a_cap[128] = "Hi Seoul";
	strcat(a_cap, 's');
	printf("%s\n", a_cap);
	//strset(a_cap, '\0'); // 초기화.
	//-----------------------------------------6, strset()
	
	//숫자 <-> 문자열
	int a_uu = 1234;
	char sss[12] = "1234";

	//7, itoa() : int형을 문자열로 변환해 주는 함수 
	int mmm = 12;
	char xxyy[12];
	sprintf(xxyy, "%d", mmm); // mmm을 서식문자에 문자열로 바꾸고 xxyy에 출력.
	//xxyy[0] = '1';
	//xxyy[1] = '2';
	//xxyy[2] = '\0';
	printf("%s\n", xxyy);
	
	int a_zzz = 1234;
	char ret3[128];
	itoa(a_zzz, ret3, 10);  //#include<stdlib.h> // 10 <=== 10진수 의미
	printf("%s\n", ret3);
	//-----------------------------------------7, itoa()

	//8, atoi() : 문자열을 int형으로 변환해 주는 함수.
	char a_hhh[128] = "4321";
	int ret4 = atoi(a_hhh);
	printf("%d\n", ret4);
	//-----------------------------------------8, atoi()
	//<<<<<<<<<<<<<<<<<<<문자열을 다루는 함수>>>>>>>>>>>>>>>>>//

	//<<<<<<<<<<<<<<<<<<<<배열을 다루는 함수>>>>>>>>>>>>>>>>>>//
	//1, memcpy() : 메모리에서 메몰로 복사하는 함수.
	int a_ss1[10] = { 11, 22, 12, 33,45,32,76,56,45,87 };
	int a_cpy[10];

	/*for (int i = 0; i < 10; i++)
	{
		a_cpy[i] = a_ss1[i];
	}*/

	memcpy(a_cpy, a_ss1, sizeof(a_ss1));
	for (int i = 0; i < 10; i++)
	{
		printf("a_cppy[%d] : %d\n", i, a_cpy[i]);
	}
	//-----------------------------------------1, memcpy()

	//2, memset() : 메모리 전체를 특정한 값으로 셋팅해 주는 함수
	int a_pp[100] = { 0 };
	a_pp[0] = 54;
	a_pp[1] = 12;
	a_pp[2] = 11;
	//    :
	//    :
	//a_pp[100] = { 0 }; //잠재적 에러의 원인이된다.
	//for (int i = 0; i < 100; i++)
	//{
	//	a_pp[i] = 0;
	//}

	memset(a_pp, 0, sizeof(a_pp));
	for (int i = 0; i < 100; i++)
	{
		printf("a_pp[%d] : %d\n", i, a_pp[i]);
	}
	//-----------------------------------------2, memset()
	//<<<<<<<<<<<<<<<<<<<<배열을 다루는 함수>>>>>>>>>>>>>>>>>>//

	getchar();
}