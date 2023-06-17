#include <stdio.h>
#include <stdlib.h>
/**
 *main - print alphabet without q or e
 *Return: always 0 (indicating Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
	}
	putchar('\n');

	return (0);
}
