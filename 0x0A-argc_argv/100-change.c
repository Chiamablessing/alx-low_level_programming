#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point in c programming
 * @argc: count of arguments passed in the terminal
 * @argv: the arguments passed in the terminal
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int cents, i, results;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
	return (1);
	}
	results = 0;

	for (i = 0; i < 5 && cents >= 0; i++)
	{
	while (cents >= coins[i])
	{
	results++;
	cents -= coins[i];
	}
	}
	printf("%d\n", results);
	return (0);
}
