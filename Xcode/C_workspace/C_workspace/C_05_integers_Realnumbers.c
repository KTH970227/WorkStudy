#include <stdio.h>

//정수(integers) : 음수, 0, 양수 / 내부적으로 2진수
//실수(RealNumbers) : 2.0, 3.14, 0.123 / 내부적 2진수 + 부동 소수점(floating point)
//3.14 = 3.14E0 = 3.14e0 = 0.314E1 = 31.4E-1       E : Exponent(지수)

// unsigned : 8비트 부호 없는 정수, 32비트 부호 없는 정수
// signed : 8비트 부호 있는 정수, 32비트 부호 있는 정수
//-한 비트를 +-부호 표현에 사용
//-0:양수 1:음수
//-"2의 보수" 표현법이 일반적

//부동 소수점 수
//| +-부호(Sign) | 지수(Exponent) | 분수(Fraction) |

//단정밀도 부동 소수점 수(32bit Single Precision)
//float a = 1.234f;

//배정밀도 부동 소수점 수(64bit Single Precision)
//double pi = 3.141592;

int main()
{
    float a = 1.234f;
    
    double pi = 3.141592;
    
    printf("8Byte : %f %f\n", a, pi);
}
