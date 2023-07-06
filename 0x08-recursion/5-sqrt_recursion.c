#include "main.h"
/**
 * get_sqrt - to get natural square root
 * @n: a number
 * @i: is a natural square root
 * Return: returns the natural square root
 */
int get_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (get_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number.
 * @n: an integer nuber
 * Return: returns the natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (n < 0)
		return (-1);
	else
		return (get_sqrt(n, 0));
}
