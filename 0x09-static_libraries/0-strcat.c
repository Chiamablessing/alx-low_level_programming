#include "main.h"

/**
 * _strcat - concatenates strings
 * @dest: variable of type char
 * @src: variable of type char
 * Return: variable of type char
 */


char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
