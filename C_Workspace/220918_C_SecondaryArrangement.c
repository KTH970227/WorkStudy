#include<stdio.h>

void main()
{
	int aacc[2][3];

	aacc[0][0] = 11;
	aacc[0][1] = 22;
	aacc[0][2] = 33;
	aacc[1][0] = 44;
	aacc[1][1] = 55;
	aacc[1][2] = 66;

	for (int x = 0; x < 2; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			printf("aacc[%d][%d] : %d\n", x, y, aacc[x][y]);
		}
	}
	//aacc[0][0] : 11
	//aacc[0][1] : 22
	//aacc[0][2] : 33
	//aacc[1][0] : 44
	//aacc[1][1] : 55
	//aacc[1][2] : 66
	getchar();
}