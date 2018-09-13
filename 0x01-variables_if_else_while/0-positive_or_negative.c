#include <stdlib.h>
#include <time.h>
/**
*main - display the outcome
*
*Description: positive or negative
*Return: 0
*/
main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	If(n > 0) {
		printf("is positive\n");
	}
	If(n == 0) {
		printf("is zero\n");
	}
	If(n < 0) {
		printf("is negative\n");
	}
	return (0);
}
