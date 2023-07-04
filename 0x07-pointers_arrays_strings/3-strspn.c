#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: the first string
 * @accept: the second string
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, x, value, flag;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;

		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				value++;
				flag = 1;
			}
		}
		if (flag == 0)
			return (value);
	}
}
