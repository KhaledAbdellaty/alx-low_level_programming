#include "main.h"

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}

unsigned int _strspn(char *s, char *accept)
{
	int i, x, value, flag;

	value = 0;

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
	return (0);
}
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
	return (NULL);
}
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
int _strcmp(char *s1, char *s2)
{
	unsigned int i;

	while (*s1 == *s2)
	{
		if (*s1 != '\0')
		{
			s1++;
			s2++;
		}
		else
		{
			return (0);
		}
	}
	i = *s1 - *s2;

	return (i);
}
