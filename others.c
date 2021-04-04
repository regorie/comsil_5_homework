#include "Header.h"

void others(int* numbers, int n, int digit)
{
	int a, b, k, r, t;
	t = 10;

	while(t <= digit){

		a = n/(t*10);
		b = n%(t*10);
		k = b/t;
		r = b%t;

		for(int i=0; i<10; i++)
			numbers[i] += a*t;
		for(int i=0; i<k; i++)
			numbers[i] += t;

		numbers[k] += r+1;
		numbers[0] -= t;
		t *= 10;
	}
	return;
}
