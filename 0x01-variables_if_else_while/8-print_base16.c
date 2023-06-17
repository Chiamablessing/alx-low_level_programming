#include <stdio.h>
#include <stdlib.h>

/**
* main - print number between  0 to 9 and lettr between a to f
* Return: alwasys 0 (success)
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}

for (i = 0; i < 6; i++)
{
putchar(i + 'a');
}

putchar('\n');

return (0);
}
