#include "main.h"

/**
 * leet - substitutes characters
 * @str: a pointer parameter of typechar
 * Return: returns substituted characters string
 */
char *leet(char *str)
{
	char nums[5] = {'4', '3', '0', '7', '1'};
	char small_str[5] = {'a', 'e', 'o', 't', 'l'};
	char big_str[5] = {'A', 'E', 'O', 'T', 'L'};
	int k, m, len = (strlen(str));

	for (k = 0; k < len; k++)
	{
		for (m = 0; m < 5; m++)
			if (str[k] == small_str[m] || str[k] == big_str[m])
				str[k] = nums[m];
	}
	return (str);
}
