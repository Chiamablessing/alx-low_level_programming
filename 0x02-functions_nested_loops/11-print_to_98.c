#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - prints natural numbers to 98
 *@n: starting number
 */
void print_to_98(int n)
{
	int a;
		for (a = n; a <= 98; a++)
		{
			if (a == 0)
			{
				printf("%d\n", a);
			}
			else
			{
				printf("%d, ", a);
			}
		}
}
