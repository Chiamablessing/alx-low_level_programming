#include "3-calc.h"
/**
 * get_op_func - gets the operator function required ny the program
 * @s: operator fro the arithmetics
 * Return: returns a pointer to the called function
 *
 */
int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i = 0;

	while (ops[i].f != NULL)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
