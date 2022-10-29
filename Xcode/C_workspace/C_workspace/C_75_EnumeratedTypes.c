#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>

//¿­°ÅÇü

//ex)1
//int c = 0; // red:0, orange:1, yellow:2, green:3, ...
//if (c == 0)
//	printf("red");
//else if (c == 1)
//	printf("orange");
//else if (c == 1)
//	printf("yellow");
//... ...

//ex)2
//#define RED 1
//#define ORANGE 2
//#define YELLOW 3

//int c = YELLOW;
//if (c == YELLOW)
//	printf("yellow");

int main()
{
	//ex)1
	enum spectrum { red, orange, yellow, green, blue, violet };
	//               0      1       2      3      4     5
	enum spectrum color;
	color = blue;

	if (color == yellow)
		printf("yellow");

	for (color = red; color <= violet; color++)
		printf("%d\n", color);

	printf("red = %d, orange = %d\n", red, orange);


	//ex)2
	enum kids { jackjack, dash, snoopy, nano, pitz };
	enum kids my_kid = nano;
	printf("nano %d %d\n", my_kid, nano);


	//ex)3
	enum levels { low = 100, medium = 500, high = 2000 };
	int score = 800;
	if (score > high)
		printf("High score!\n");
	else if (score > medium)
		printf("Good job\n");
	else if (score > low)
		printf("Not bad\n");


	//ex)4
	enum pet { cat, dog = 10, lion, tiger};
	printf("cat %d\n", cat);
	printf("lion %d\n", lion);

	return 0;
}