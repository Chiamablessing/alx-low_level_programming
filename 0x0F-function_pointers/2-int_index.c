#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: array to be searched
 * @size: size of the array
 * @cmp: function that compares values
 * Return: returns the index of the first element and -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i <= size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
