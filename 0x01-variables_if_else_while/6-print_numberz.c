#include <stdio.h>
#include <stdlib.h>
/**
 * main - print number 0 to 9
 * Return: always 0 (success)
 */

int main(void)
{
        int i;

        for (i = 0; i < 10; i++)
        {
                putchar(i + '0');
        }
                putchar('\n');

        return (0);
}
