#include "main.h"

/**
 * print_array - prints an array
 * @a: pointer variable of type int
 * @n: variable of type int
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", *(a + j));
		if (j < (n - 1))
			printf(", ");
	}
	putchar('\n');
}
