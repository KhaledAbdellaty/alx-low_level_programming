#include "main.h"
/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 * without 2 and 4
 */
void print_most_numbers(void)
{
	int zero = 0;

	while (zero < 10)
	{
		if (zero != 2 && zero != 4)
			_putchar(zero + '0');
		zero++;
	}
	_putchar('\n');
}
