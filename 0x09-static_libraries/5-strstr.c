#include "main.h"
/**
 * _strstr - finds the first occurrence of a substring in the string.
 * @haystack: pointer parameter variable of type char
 * @needle: pointer parameter variable of type char
 * Return: returns rt
 */
char *_strstr(char *haystack, char *needle)
{
	char *rt = strstr(haystack, needle);

	return (rt);
}
