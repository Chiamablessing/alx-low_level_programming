#include "main.h"
/**
 *swap_int - function that swaps the values of 2 integers
 *@a:  pointer variable tpe of int
 *@b:  pointer variable tpe of int
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
