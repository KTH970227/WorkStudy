#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>
#include <stdlib.h>

//구조체와 포인터 2

struct my_data
{
	int a;
	char c;
	float arr[2];//Array
};

struct my_data2
{
	int a;
	char c;
	float* arr; //Pointer
};

int main()
{
	//Array
	struct my_data d1 = { 1234, 'A', };
	d1.arr[0] = 1.1f;
	d1.arr[1] = 2.2f;
	printf("%d %c %lld\n", d1.a, d1.c, (long long)d1.arr);
	printf("%f %f\n", d1.arr[0], d1.arr[1]);
	printf("%lld %lld\n\n", (long long)&d1.arr[0], (long long)&d1.arr[1]);

	struct my_data d2 = d1;
	printf("%d %c %lld\n", d2.a, d2.c, (long long)d2.arr);
	printf("%f %f\n", d2.arr[0], d2.arr[1]);
	printf("%lld %lld\n\n", (long long)&d2.arr[0], (long long)&d2.arr[1]);


	//Pointer
	struct my_data2 d2_1 = { 1234, 'A', NULL};
	d2_1.arr = (float*)malloc(sizeof(float) * 2);
	d2_1.arr[0] = 1.1f;
	d2_1.arr[1] = 2.2f;
	printf("%d %c %lld\n", d2_1.a, d2_1.c, (long long)d2_1.arr);
	printf("%f %f\n", d2_1.arr[0], d2_1.arr[1]);
	printf("%lld %lld\n\n", (long long)&d2_1.arr[0], (long long)&d2_1.arr[1]);

	struct my_data2 d2_2 = d2_1;
	printf("%d %c %lld\n", d2_2.a, d2_2.c, (long long)d2_2.arr);
	printf("%f %f\n", d2_2.arr[0], d2_2.arr[1]);
	printf("%lld %lld\n\n", (long long)&d2_2.arr[0], (long long)&d2_2.arr[1]);

	return 0;
}
