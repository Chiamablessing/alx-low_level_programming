#include "main.h"
/**
 * _strpbrk - locates the first occurance of a character in the string.
 * @s: pointer parameter variable of type char
 * @accept: pointer parameter variable of type char
 * Return: returns rt
 */

char *_strpbrk(char *s, char *accept)
{
	char *rt = strpbrk(s, accept);

	return (rt);
}
