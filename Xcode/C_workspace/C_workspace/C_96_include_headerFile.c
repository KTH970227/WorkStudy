#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>
#include "C_96_my_functions.h"
#include "C_96_my_structures.h"
#include "C_96_my_macros.h"

//#include와 헤더파일

extern int status;

int main()
{
	printf("PI = %f\n", PI);
	printf("%p %d\n", &status, status);

	print_status();

	printf("%d\n", muliply(51, 2));

	printf("main()\n");
	printf("Static function address %p\n", muliply);
	printf("Static variable address %p\n", &si);

	print_address();

	patient_info james = { "James Bone", 45 }, michael = { "Michael Jobs", 50 };

	return 0;
}