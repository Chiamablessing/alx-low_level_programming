#include <stdio.h>
#include <stdlib.h>
/**
 *main - print combination of two digits
 *Return: always 0 (Success)
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 1; b <= 10; b++)
		{
			if (b > a)
			{
				putchar('0' + a);
				putchar('0' + b);
				if (a != 9 || b != 10)
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
