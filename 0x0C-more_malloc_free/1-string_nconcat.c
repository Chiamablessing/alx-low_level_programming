#include "main.h"
/**
 * string_nconcat - concatenates strings
 * @s1: base string to concatenate to
 * @s2: second string to concatenate to
 * @n: number of strings to get from n
 * Return: returns NULL on error and
 * pointer to the new string address
 * on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1, len2, new_len;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	new_len = len1 + n + 1;

	new_str = (char *)malloc(new_len);

	if (new_str == NULL)
	{
		return (NULL);
	}

	memcpy(new_str, s1, len1);

	memcpy(new_str + len1, s2, n);

	new_str[len1 + n] = '\0';

	return (new_str);
}
