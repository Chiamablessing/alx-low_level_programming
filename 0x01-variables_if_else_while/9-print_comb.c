#include <stdio.h>
#include <stdlib.h>
/**
 *main - print possible combinations of single digit numbers
 *Return: always 0 (Indicating Success)
 */

int main(void)
{
	int com;

	for (com = 0; com < 10; com++)
	{
		putchar('0' + com);
		if (com != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
