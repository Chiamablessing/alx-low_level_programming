#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * int _atoi - converts string to int
 * @s: pointer variable of type int
 */

int _atoi(char *s)
{
	int j, num, end = (strlen(s));

	for (j = 0; j < end; j++)
	{
		if (s[j] != '+' || s[j] != '-')
			num = (int)(s[j]);
	}
	return (num);
}
