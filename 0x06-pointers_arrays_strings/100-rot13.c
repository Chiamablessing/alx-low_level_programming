#include "main.h"
/**
 * rot13 - letter substitution using rot13 cipher.
 * @str: a pointer parameter to the srting to be encoded.
 * Return: returns substituted characters string
 */

char *rot13(char *str)
{
	int a;
	int b;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (str[a] == data1[b])
			{
				str[a] = datarot[b];
				break;

			}
		}
	}

	return (str);
}
