#include "main.h"

/**
 *print_alphabet_x10 - printing a-z * 10 in lowercase
 *Return: always 0
 */

void print_alphabet_x10(void)
{
	char alpha;
	int mul;

	for (mul = 0; mul < 10; mul++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
