#include "3-calc.h"
/**
 * op_add - adds 2 integers
 * @a: first integer
 * @b: second integer
 * Return: returns calculated value of the integers
 */

int op_add(int a, int b)
{
	printf("%d\n", a + b);
	return (a + b);
}
/**
 * op_sub - performs subtraction on 2 integers
 * @a: first integer
 * @b: second integer
 * Return: returns calculated value
 */
int op_sub(int a, int b)
{
	printf("%d\n", a - b);
	return (a - b);
}
/**
 * op_mul - multiplies 2 integers
 * @a: first integer
 * @b: second integer
 * Return: returns calculated value
 */
int op_mul(int a, int b)
{
	printf("%d\n", (a) * (b));
	return (a * b);
}
/**
 * op_div - perform division on 2 integers
 * @a: first integer
 * @b: second integer
 * Return: returns calculated value
 */
int op_div(int a, int b)
{
	printf("%d\n", a / b);
	return (a / b);
}
/**
 * op_mod - check the remainder of 2 integers division
 * @a: first integer
 * @b: second integer
 * Return: returns calculated value
 */
int op_mod(int a, int b)
{
	printf("%d\n", a % b);
	return (a % b);
}
