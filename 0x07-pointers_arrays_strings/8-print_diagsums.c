#include "main.h"
/**
 * print_diagsums - a function that prints the sum
 * of the two diagonals of a square matrix of integers
 * @a: a 2D array of integer
 * @size: size of the array
 */
void print_diagsums(int *a, int size)
{
	unsigned int s, s1;

	int i;

	s = 0;
	s1 = 0;

	for (i = 0; i < size; i++)
	{
		s += a[(size * i) + i];
		s1 += a[size * (i + 1) - (i + 1)];
	}
	printf("%d, %d\n", s, s1);
}
