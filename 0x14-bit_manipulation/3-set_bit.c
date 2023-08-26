#include "main.h"

/**
 * set_bit - a function that sets the value of a bit
 * @n: is a pointer to the number
 * @index: the vit index
 * Return: returns 1 on success, or -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
