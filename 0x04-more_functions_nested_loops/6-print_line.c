#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 * @n:is an argument
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (int a = 1; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
