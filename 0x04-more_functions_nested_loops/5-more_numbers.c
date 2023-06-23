#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 */
void more_numbers(void)
{
	int column;
	int row;

	for (column = 0; column < 10; column++)
	{
		for (row = 0; row < 15; row++)
		{
			if (row >= 10)
				_putchar(row / 10 + '0');
			_putchar(row % 10 + '0');
		}
		_putchar('\n');
	}
}
