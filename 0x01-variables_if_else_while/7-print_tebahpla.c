#include <stdio.h>
#include <stdlib.h>

/**
*main - print lowercase alphabet in reverse
*Return: always 0 (Success)
*/

int main(void)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
	{
	}
	for (ab = 'z'; ab >= 'a'; ab--)
	{
		putchar(ab);
	}
	putchar('\n');

	return (0);
}
