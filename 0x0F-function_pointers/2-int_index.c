#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: an integer array
 * @size: number of elements in the array
 * @cmp: a pointer to function
 * Return: if size <= 0 or no elements matches
 * returns -1 otherwise returns the index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
					
