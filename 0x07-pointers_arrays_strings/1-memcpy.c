#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer parameter of type char
 * @src: pointer parameter of type char
 * @n: parameter of unsigned int char
 * Return: returns dest
 * 
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
