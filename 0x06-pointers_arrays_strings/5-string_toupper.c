#include "main.h"
/**
 * string_toupper - changes lowercase strings to uppercase strings
 * @str: pointer variable parameter of type char
 * Return: returns str variable pointer
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}
