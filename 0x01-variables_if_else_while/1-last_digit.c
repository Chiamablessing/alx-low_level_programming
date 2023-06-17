#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* Checking conditions in c */

/**
*main - Entry point
*Return: 0 (Indicating success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0 && n % 12 >= 6)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 12);
	else if (n % 12  == 0)
		printf("Last digit of %d is %d and is 0\n", n, n % 12);
	else if (n % 12 < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 12);

	return (0);
}
