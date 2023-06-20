#include"main.h"
/**
 * _abs - a function that computes the absolute value of an integer.
 * @n: an argumant
 * Return: returns an integer number
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
