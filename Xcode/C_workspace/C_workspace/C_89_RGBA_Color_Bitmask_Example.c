#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>

//RGBA 색상 비트 마스크 연습 문제

#define BYTE_MASK 0xff

int main()
{
	unsigned int rgba_color = 0x66CDAAFF;
	//4 bytes, medium aqua marine (102, 205, 170, 255)

	unsigned char red, green, blue, alpha;

	// [Use right shift >> operator]
	alpha = rgba_color & BYTE_MASK;          //FF
	blue  = (rgba_color >> 8 & BYTE_MASK);  //AA
	green = (rgba_color >> 16 & BYTE_MASK); //CD
	red   = (rgba_color >> 24 & BYTE_MASK); //66

	printf("(R, G, B, A) = %hhu, %hhu, %hhu, %hhu\n",
		red, green, blue, alpha);

	return 0;
}