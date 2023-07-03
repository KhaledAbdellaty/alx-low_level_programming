#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard.
 * @a: a 2D array of char
 */
void print_chessboard(char (*a)[8])
{
	int i, x;

	for (i = 0; i < 8; i++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(a[i][x]);
		}
		_putchar('\n');
	}
}
