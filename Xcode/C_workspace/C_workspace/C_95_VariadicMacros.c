#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>

//�����μ� ��ũ��
#define PRINT(X, ...) printf("Message " #X ": " __VA_ARGS__)
// ... : ellipses
// __VA_ARGS : one of the predefined macros

int main()
{
	double x = 48;
	double y;

	y = sqrt(x);
	PRINT(1, "x = %g\n", x);
	printf("Message " "1" ": " "x = %g\n", x);

	PRINT(2, "x = %.2f, y = %.4f\n", x, y);
	printf("Message " "2" ": " "x = %.2f, y = %.4f\n", x, y);

	return 0;
}