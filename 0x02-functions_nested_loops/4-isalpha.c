#include"main.h"
/**
 * _isalpha - a function that checks for alphabetic character
 * @c: checks the argument of function
 * Return: returns 1 if c is lowercase otherwise returns 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) ||
	    (c >= 65 && c <= 90))
		return (1);
	return (0);
}
