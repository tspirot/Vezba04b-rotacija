// Vezba04b.cpp : This file contains the 'main' function. Program execution begins and ends there.
// ROTIRANJE NIZA
#include <stdio.h>
int main()
{				//	10 1 2 3 4 5 6 7 8 9
	int niz[100] = { 1,2,3,4,5,6,7,8,9,10};
	int n = 10, p, i, j, k=3;
	// Rotiranje niza za 1 mesto udesno
	for (j = 0; j < k; j++)
	{
		p = niz[0];
		for (i = 0; i < n-1; i++)
			niz[i] = niz[i + 1];
		niz[n-1] = p;
	}
	for (i = 0; i < n; i++)
		printf("%d ", niz[i]);
}
