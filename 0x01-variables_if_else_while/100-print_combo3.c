#include <stdio.h>
#include <stdlib.h>
/**
 *main - print combination of two digits
 *Return: always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (j > i)
			{
				putchar(48 + i);
				putchar(48 + j);
				if (i != 8 || j != 9)
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
