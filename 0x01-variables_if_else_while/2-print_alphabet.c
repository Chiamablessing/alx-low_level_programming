#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints alphabet with function
 * Return:  0 (success)
 */

int main(void)
{
	char ab;
	char ac;

	for (ab = 'a'; ab <= 'z'; ab++)
	{
		putchar(ab);
	}
	for (ac = 'A'; ac <= 'Z'; ac++)
	{
		putchar(ac);
	}

	putchar('\n');

	return (0);
}
