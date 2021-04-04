#include "Header.h"

int main(int argc, char* argv[])
{
	if(argc == 1){
		printf("Error!\nUsage: ./main [file]\n");
		exit(0);
	}	

	FILE* op = fopen(argv[1], "r");
	int s, n, digit;

	fscanf(op, "%d", &s);

	for(int z=0; z<s; z++){
		int numbers[10] = {0};
		fscanf(op, "%d", &n);		

		digit = count_digit(n);
		one(numbers, n);
		if(digit >= 10)
			others(numbers, n, digit);

		for(int i=0; i<10; i++)
			printf("%d ", numbers[i]);

		printf("\n");
	}
	
	fclose(op);
	return 0;
}
