#include "main.h"
/**
 * malloc_checked - function for allocating memory
 * @b: number of bytes to allocate
 * Return: returns a pointer to a memory address
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
