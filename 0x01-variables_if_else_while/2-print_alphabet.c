#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print alphabet
 * Return: Always 0 (success)
 */

int main(void)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
	{
		putchar(ab);
	}

	putchar('\n');

	return (0);
}
