#include "main.h"
/**
 * wildcmp - get the cmp function
 * @s1: the first string passed to the function
 * @s2: the second string passed to the function
 * Return: returns 0 if comp is 0 and 1 otherwise
 *
 */

int wildcmp(char *s1, char *s2)
{

	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

		if (*s1 == *s2)
			return (wildcmp(s1 + 1, s2 + 1));

		return (0);
}
