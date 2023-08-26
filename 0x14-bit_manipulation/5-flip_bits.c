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
	int i, count = 0;
	unsigned long int value;
	unsigned long int x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		value = x >> i;
		if (value & 1)
			count++;
	}

	return (count);
}
