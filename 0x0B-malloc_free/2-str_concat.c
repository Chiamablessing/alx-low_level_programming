#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: char variable type
 * @s2: char variable type
 * Return: returns the variable with the combined strings
 * and returns NULL if malloc returns null value
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *link;

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

	link = malloc(len1 + len2 + 1);

	if (link == NULL)
	{
		return (NULL);
	}

	strcpy(link, s1);
	strcat(link, s2);

	return (link);
}
