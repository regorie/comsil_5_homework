#include "Header.h"

void one(int* numbers, int n)
{
	int a = n/10;
	int b = n%10;

	for(int i=0; i<10; i++)
		numbers[i] += a;
	for(int i=1; i<=b; i++)
		numbers[i] += 1;
	return;
}
