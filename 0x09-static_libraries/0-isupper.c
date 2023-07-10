#include "main.h"
/**
 * _isupper - function that returns 1 if the argument
 * is uppercase otherwise returns 0
 * @c: is an argumanet
 * Return: 1 if is uppercase else returns 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
