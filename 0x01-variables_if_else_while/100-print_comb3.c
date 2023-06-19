#include <stdio.h>
#include <stdlib.h>
/**
 *main - a program that prints all possible combination of different digits
 *Return: always 0
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a < 9; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			if (a < b)
			{
				putchar(a + '0');
				putchar(b + '0');
				if (a == 8 && x == b)
				{
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
