#include"main.h"
/**
 * print_sign - a function that prints the sign of a number
 *@n: an argument .
 *Return: returns 1 if n greater than zero otherwise return 0 .
 **/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
