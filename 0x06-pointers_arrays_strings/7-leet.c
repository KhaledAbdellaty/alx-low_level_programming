#include "main.h"
/**
 * leet - a function that encodes a string into 1337 .
 * @s: a string
 * Return: returns encoded string
 */
char *leet(char *s)
{
	int i, x;

	char a[10] = "aAeEoOtTlL";
	char b[10] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; x < 10; x++)
		{
			if (s[i] == a[x])
			{
				s[i] = b[x];
			}
		}
	}
	return (s);
}
