#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>
#include <stdlib.h>
#define FUNDLEN 50

//구조체를 함수로 전달하는 방법

struct fortune {
	char    bank_name[FUNDLEN];
	double  bank_saving;
	char    fund_name[FUNDLEN];
	double  fund_invest;
};

//double sum(double*, double*);
double sum(const struct fortune *my_fortune);

int main()
{
	struct fortune my_fortune = {
		"Wells-Fargo",
		4032.27,
		"JPMorgan Chase",
		8543.94
	};

	printf("Total : $%.2f.\n",
		//sum(&my_fortune.bank_saving, &my_fortune.fund_invest)
		sum(&my_fortune)
	);

	struct fortune my_fortune2;
	my_fortune2 = my_fortune;

	return 0;
}

//double sum(const double* x, const double* y)
//{
//	return *x + *y;
//}

double sum(const struct fortune *mf)
{
	return mf->bank_saving + mf->fund_invest;
}