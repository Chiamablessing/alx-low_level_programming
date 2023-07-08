#include "main.h"
/**
 * main - entry point in c programming
 * @argc: holds the size of arguments passed in terminal
 * @argv: holds that arguments passed in terminal
 * Return: retuns 1 if (!(argc > 1)) and 0 otherwise
 */
int main(int argc, char *argv[])
{
	int num1, num2 = 1;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argc < 4)
	{
		for (num1 = 1;  num1 < 3; num1++)
		{
			num2 *= atoi(argv[num1]);
		}
		printf("%d\n", num2);
	}
	return (0);
}

