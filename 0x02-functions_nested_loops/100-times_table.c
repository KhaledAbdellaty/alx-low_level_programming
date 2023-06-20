#include "main.h"
/**
 * print_times_table - a function that prints the n times table, starting with 0 .
 * @n: an argument
 */
void print_times_table(int n)
{
	int row, column, nums;
	if (n >= 0 && nn < 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				nums = column * row;
				if (column == 0)
				{
					_putchar(nums + '0');
				}
				else
				{
					_putchar(
