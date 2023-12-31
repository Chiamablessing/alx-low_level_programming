#include "main.h"
/**
 * _realloc - reallocates a memory block
 * @ptr: points to to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: returns NULL on error and new pointer address
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (old_size > new_size)
	{
		memcpy(new_ptr, ptr, old_size);
	}
	else if (new_size > old_size)
		memcpy(new_ptr, ptr, new_size);
	free(ptr);
	return (new_ptr);
}
