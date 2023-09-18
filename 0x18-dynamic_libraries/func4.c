#include "main.h"
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
char *_strncat(char *dest, char *src, int n)
{
	int i, x;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (x = 0; x < n && (src[x] != '\0'); x++)
	{
		dest[i] = src[x];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
char *_strcat(char *dest, char *src)
{
	int i, x;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (x = 0; src[x] != '\0'; x++)
	{
		dest[i] = src[x];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
int _atoi(char *s)
{
	return (0);
}
char *_strcpy(char *dest, char *src)
{
	return (src);
}
