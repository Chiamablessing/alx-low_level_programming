#include "main.h"
/**
 * array_range - creates an array if integers
 * using provided parameter values
 * @min: minimum range of an integer
 * @max: maximum range of an integer
 * Return: pointer to the created array and NULL otherwise
 *
 */

int *array_range(int min, int max)
{
	int a, *ptr_arr;

	if (min > max)
		return (NULL);

	ptr_arr = malloc(sizeof(int) * (max - min + 1));
	if (ptr_arr == NULL)
		return (NULL);
	for (a = 0; a <= (max - min); a++)
		ptr_arr[a] = min + a;
	return (ptr_arr);
}
