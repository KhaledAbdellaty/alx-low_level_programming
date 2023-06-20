#include"main.h"
/**
 *_islower - a function that checks for lowercase character.
 *@c: argument of function
 *Return: returns 1 if the argument is lowercase otherwise 0 
 */

int _islower(int c)
{
	while (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
