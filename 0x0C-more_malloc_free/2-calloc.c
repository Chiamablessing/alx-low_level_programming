#include "main.h"
/**
 * _calloc - allocates memory for an array
 * of nmemb elements of size bytes each
 * and returns a pointer to the allocated
 * memory.
 * @nmemb: number of bytes to allocate
 * @size: size of the bytes each
 * Return: return address of allocated memory
 * and NULL otherwise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr_arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr_arr = calloc(nmemb, size);
	if (ptr_arr == NULL)
		return (NULL);

	return (ptr_arr);
}
