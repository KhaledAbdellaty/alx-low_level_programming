#include "main.h"
/**
 * print_square - a function that prints a square, followed by a new line.
 * @size: an argument that prints square dimentions
 */
void print_square(int size)
{
	if (size > 0)
	{
		int column, row;

		for (column = 0; column < size; column++)
		{
			for (row = 0; row < size; row++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
