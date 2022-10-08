#define _CRT_SECRUE_NO_WARININGS

#include <stdio.h>

//데이터형 (Object)
//Lvalue (object locator value) : 메모리를 차지하고 있는 특정 데이터 객체
//ex) a,b,c는 수정가능한 L-Value, Two는 수정 불가능한 L-Value

//Rvalue (value of an expression) : 수정 가능한 L-Value에게 대입될 수 있지만, 자기 자신은 L-Value가 될 수 없는 것들
//ex) 42, (a+b)

//피연산자 (operand)
//연산자 (operator)
//대입연산자 : = + - * /
//더하기(addition), 빼기(subraction), 부호(sign)
//곱하기
//나누기
//나머지(Modulus Operator)
//증가, 감소 연산자


int main()
{
//    printf("%d\n", 1 + 2);

    int income, salary, bonus;

    income = salary = bonus = 100; //triple assignment
    //(income = (salary = (bonus = 100)));

    salary = 100;
    bonus = 30;

    income = salary + bonus;  //l-value vs r-value
    printf("%d\n", income);

    int takehome, tax;
    tax = 20;
    takehome = income - tax;

    int a, b;
    a = -7;
    b = -a;
    b = +a;
    
    //1.0f + 2;//?
    
    
    
    
    //곱하기
    //이자율 계산기 프로그램
    double seed_money, target_money, annual_interest;

    printf("Input seed money : ");
    scanf("%lf", &seed_money);

    printf("Input target money : ");
    scanf("%lf", &target_money);

    printf("Input annual interest (%%) : ");
    scanf("%lf", &annual_interest);

    double fund = seed_money;
    int year_count = 0;

    while(fund < target_money)
    {
        //fund = fund + fund * annual_interest / 100.0;
        //year_count = year_count + 1;

        fund += fund * annual_interest / 100.0;
        year_count++;

        printf("Year %d, fund %f\n", year_count, fund);
    }

    printf("It takes %d years.\n", year_count);
    
    
    
    
    //나누기
    printf("Integer divisions\n");
    printf("%d\n", 14 / 7);
    printf("%d\n", 7 / 2); //3.5
    printf("%d\n", 7 / 3); //2.333
    printf("%d\n", 7 / 4); //1.75
    printf("%d\n", 8 / 4); //2

    printf("Truncationg toward zero(C99)\n");
    printf("%d\n", -7 / 2); //-3.5
    printf("%d\n", -7 / 3); //-2.333
    printf("%d\n", -7 / 4); //-1.75
    printf("%d\n", -8 / 4); //-2

    printf("nFloating divisions\n");
    printf("%f\n", 9.0 / 4.0); //
    printf("%f\n", 9.0 / 4);   //
    
    
    
    //나머지 연산
    //예제1 시간초 계산기 프로그램
    int seconds = 0, minutes = 0, hours = 0;

    printf("Input seconds : ");
    scanf("%d", &seconds);

    //예외처리
    while(seconds >= 0)
    {
        //TODO : seconds -> hours, minutes, seconds
        minutes = seconds / 60;
        seconds %= 60;

        hours = minutes / 60;
        minutes %= 60;

        //printf Result
        printf("%d hours, %d minutes, %d secondes\n", hours, minutes, seconds);

        printf("Input seconds : ");
        scanf("%d", &seconds);
    }

    printf("GoodBye");
    
    
    //예제2
    int div, mod;

    div = 11 / 5;
    mod = 11 % 5;
    printf("div = %d, mod = %d\n", div, mod); // 2 1

    div = 11 / -5;
    mod = 11 % -5;
    printf("div = %d, mod = %d\n", div, mod); // -2 1

    div = -11 / -5;
    mod = -11 % -5;
    printf("div = %d, mod = %d\n", div, mod); // 2 -1

    div = -11 / 5;
    mod = -11 % 5;
    printf("div = %d, mod = %d\n", div, mod); // -2 -1
    
    
    //증가 연산자
    int a = 0;
    a++;
    printf("%d\n", a);  //1
    
    ++a;
    printf("%d\n", a);  //2
    
    a--;
    printf("%d\n", a);  //1
    
    --a;
    printf("%d\n", a);  //0
    
    double b = 0;
    b++;
    printf("%f\n", b);  //1.000
    
    ++b;
    printf("%f\n", b);  //2.000
    
    b--;
    printf("%f\n", b);  //1.000
    
    --b;
    printf("%f\n", b);  //0.000
    
    
    return 0;
}
