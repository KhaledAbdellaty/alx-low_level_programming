#include "main.h"
/**
 * _strpbrk - a function that searches
 * a string for any of a set of bytes.
 * @s: the first string
 * @accept: searching string list
 * Return: Returns a pointer to the byte in s,
 */
char *_strpbrk(char *s, char *accept)
{
	int i, x;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
				return (&s[i]);
		}
	}
	return ('\0');
}
