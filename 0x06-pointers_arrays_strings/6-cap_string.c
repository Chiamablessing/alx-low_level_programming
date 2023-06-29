#include "main.h"
/**
 * cap_string - capitalize the first character of string with separations of words
 * @str: pointer variable parameter of type char
 * Return: returns string with capitalize first character
 */
char *cap_string(char *str)
{
	int k, len = strlen(str);

	for (k = 0; k < len; k++)
	{
		if (k == 0 || isspace(str[k - 1]) || str[k - 1] == ','
				|| str[k - 1] == ';' || str[k - 1] == '.'
				|| str[k - 1] == '!' || str[k - 1] == '?'
				|| str[k - 1] == '"' || str[k - 1] == '('
				|| str[k - 1] == ')' || str[k - 1] == '{'
				|| str[k - 1] == '}')
		{
			if (islower(str[k]))
			{
				str[k] = toupper(str[k]);
			}
		}
	}
	return (str);
}
