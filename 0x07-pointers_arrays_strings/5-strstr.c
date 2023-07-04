#include "main.h"
/**
 * _strstr - a function that locates a substring.
 * @haystack: a string
 * @needle: searching substring
 * Return: Returns a pointer located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, x;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (x = 0; needle[x] != '\0'; x++)
		{
			if (haystack[i] != needle[x])
				break;
		}
		if (!needle[x])
			return (&(haystack[i]));
	}
	return ('\0');
}
