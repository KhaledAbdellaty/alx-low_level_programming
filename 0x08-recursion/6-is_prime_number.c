#include "main.h"
/**
 * get_prime_number - a function that check if the input
 * integer is a prime number or not
 * @n: the input integer
 * @i: the input number minus one
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0.
 */
int get_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0 && i > 0)
		return (0);
	else
		return (get_prime_number(n, i - 1));
}

/**
 * is_prime_number -  a function that returns 1 if
 * the input integer is a prime number
 * @n: the input integer number
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (get_prime_number(n, n - 1));
}
