#include "main.h"

/**
 *function print_alphabet_x10 - print 10 times the alphabet
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
