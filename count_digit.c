#include "Header.h"

int count_digit(int n)
{
	int digit;

	for(digit=1; digit<1000000000; digit*=10){
		if(n%digit == n){
			break;
		}
	}
	return digit/10;
}
