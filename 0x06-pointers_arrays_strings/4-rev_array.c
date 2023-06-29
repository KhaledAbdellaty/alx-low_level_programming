#include "main.h"
/**
 * reverse_array - a function that reverses
 * the content of an array of integers
 * @a: an array of integers
 * @n: is the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, x, value;

	x = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		value = a[i];
		a[i] = a[x];
		a[x--] = value;
	}
}
