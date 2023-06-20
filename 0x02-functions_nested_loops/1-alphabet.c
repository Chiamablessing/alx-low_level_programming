#include "main.h"
/**
 *print_alphabet - prints alphabets
 *Return: always 0 (successful)
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet++);
	}
	_putchar('\n');
}
