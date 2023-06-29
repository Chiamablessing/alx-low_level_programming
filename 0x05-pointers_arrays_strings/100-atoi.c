#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * int _atoi - converts string to int
 * @s: pointer variable of type int
 */

int _atoi(char *s)
{
	int num = 0;

	while (*s != '\0')
	{
		num = num * 10 + (*s - '0');
		s++;
	}
	return (num);
}
