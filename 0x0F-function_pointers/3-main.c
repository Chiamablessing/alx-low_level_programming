#include "3-calc.h"
/**
 * main - entry point in c programming
 * @arc: number of arguments passed in the terminal
 * @argv: arguments passed in the terminal
 * Return: always 0
 */
int main(int arc, char **argv)
{
	char *op;
	int num1, num2;

	if (arc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/'  || *op == '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	get_op_func(op)(num1, num2);
	return (0);
}
