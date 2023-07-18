#include "main.h"
/**
 * main - entry point in c programming
 * @argc: holds the size of arguments passed in terminal
 * @argv: holds tht arguments passed in terminal
 * Return: return 1 if a char type is found and 0 otherwise
 */

int main(int argc, char *argv[])
{
	int sum = 0, num1, indx1, indx2;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
		return (0);
	}

	for (indx1 = 1; indx1 < argc; indx1++)
	{
		for (indx2 = 0; argv[indx1][indx2]; indx2++)
		{
			if (!isdigit(argv[indx1][indx2]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num1 = atoi(argv[indx1]);
		if (num1 < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num1;
	}

	printf("%d\n", sum);
	return (0);
}
