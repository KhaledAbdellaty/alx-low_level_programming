#include "main.h"

/**
 * flip_bits - counts of chaged bit
 * @n: number
 * @m: number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int value;

	value = n ^ m;
	count = 0;

	while (value)
	{
		count++;
		value &= (value - 1);
	}

	return (count);
}
