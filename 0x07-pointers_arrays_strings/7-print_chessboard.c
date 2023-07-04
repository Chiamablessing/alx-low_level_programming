#include "main.h"
/**
 *print_chessboard - prints chess board
 *@a: pointer parameter of type char array
 */
void print_chessboard(char (*a)[8])
{
	int i, j, n = sizeof(a);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
