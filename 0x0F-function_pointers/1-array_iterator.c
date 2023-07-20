#include "function_pointers.h"
/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array
 * @array: array to use
 * @size: the size of the array
 * @action: is a pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	 unsigned int i = 0;

	if (array == NULL || size <= 0 || action == NULL)
		return;
	do {
		action(array[i]);
		i++;
	} while (i < size);
}
