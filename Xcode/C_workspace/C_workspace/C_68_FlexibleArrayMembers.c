#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>
#include <string.h>

//신축성 있는 배열 멤버

int main()
{
	struct flex
	{
		size_t count;
		double average;
		double values[];
	};

	const size_t n = 3;

	struct flex* pf = (struct flex*)malloc(sizeof(struct flex) + n * sizeof(double));
	if (pf == NULL) exit(1);

	printf("\nFlexible array member\n");
	printf("Sizeof struct flex %zd\n", sizeof(struct flex));
	printf("Sizeof *pf %zd\n", sizeof(*pf));
	printf("Sizeof malloc %zd\n", sizeof(struct flex) + n * sizeof(double));

	printf("%lld\n", (long long)pf);
	printf("%lld\n", (long long)& pf->count);
	printf("%zd\n", sizeof(pf->count));
	printf("%lld\n", (long long)& pf->average);
	printf("Address of pf->values %lld\n", (long long)&pf->values);
	printf("Value of pf->values %lld\n", (long long)pf->values);
	printf("Sizeof pf->values %lld\n", sizeof(&pf->values));

	pf->count = n;
	pf->values[0] = 1.1;
	pf->values[1] = 2.1;
	pf->values[2] = 3.1;

	pf->average = 0.0;
	for (unsigned i = 0; i < pf->count; ++i)
		pf->average += pf->values[i];
	pf->average /= (double)pf->count;

	printf("Average = %f\n", pf->average);

	free(pf);

	return 0;
}