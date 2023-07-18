#include "main.h"
/**
 * _strspn - gets the length of a profix substring
 * @s: pointer parameter varibale of type char
 * @accept: pointer parameter varibale of type char
 * Return: retunrs rt
 */
unsigned int _strspn(char *s, char *accept)
{
	size_t rt = strspn(s, accept);

	return (rt);
}
