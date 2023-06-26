#include "main.h"
#include <string.h>
/**
 * rev_string - reversing s string
 * @s: pointer variable of type int
 */
void rev_string(char *s)
{
	int i = 0, temp, end = (strlen(s));

	while (i < (end / 2))
	{
		temp = s[i];
		s[i] = s[end - i - 1];
		s[end - i - 1] = temp;
		i++;
	}
}
