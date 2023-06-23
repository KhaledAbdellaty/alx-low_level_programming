#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: an argument
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int a, b;

		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				if (a > b)
					_putchar(' ');
				else if (b == a)
					_putchar('\\');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
