#include "main.h"
/**
 * reverse_array - reverse arrays
 * @a: pointer variable parameter of type int
 * @n: pointer variable parameter of type int the number of element to swap
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int k = n - 1;
	int temp;

	while (i < k)
	{
		temp = a[i];
		a[i] = a[k];
		a[k] = temp;

		i++;
		k--;
	}
}
