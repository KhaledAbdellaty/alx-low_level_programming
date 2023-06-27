#include "main.h"
/**
 * swap_int - a function that swaps the values
 * of two integers
 * @a: first parameter
 * @b: second parameter
 */

void swap_int(int *a, int *b)
{
	int first_num = *a;

	*a = *b;
	*b = first_num;
}
