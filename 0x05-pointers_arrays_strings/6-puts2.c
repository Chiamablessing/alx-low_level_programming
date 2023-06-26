#include "main.h"
#include <string.h>
/**
 * puts2 - prints strings evenly
 * @str: pointer variale of type string
 */

void puts2(char *str)
{
	int i, end;

	end = (strlen(str));
	for (i = 0; i < end; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
