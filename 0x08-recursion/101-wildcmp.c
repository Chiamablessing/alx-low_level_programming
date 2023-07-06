#include "main.h"
/**
 * comp- compares s strings
 * @s1: the first string
 * @s2: the second string
 * @i: index count of he string
 * Return: 0 if string are not equal and 1 otherwise
 */
int comp(char *s1, char *s2, int i)
{
	if (s2[i])
	{
		if (s2[i] == '*')
		{
			s2[i] = s1[i];
		}
		if (s1[i] != s2[i])
			return (0);
		comp(s1, s2, ++i);
	}
	return (1);
}

/**
 * wildcmp - get the cmp function
 * @s1: the first string passed to the function
 * @s2: the second string passed to the function
 * Return: returns 0 if comp is 0 and 1 otherwise
 *
 */

int wildcmp(char *s1, char *s2)
{
	int i = 0, f;

	f = comp(s1, s2, i);
	if (f == 0)
		return (0);
	return (1);
}
