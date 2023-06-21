#include <ctype.h>
#include "main.h"
/**
 *_islower - checks the character case of c
 *Return: 1 if lower and 0 otherwise
 *@c: is a parameter of the function
*/

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
