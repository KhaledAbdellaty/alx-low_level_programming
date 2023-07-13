#include "main.h"
#include <stdlib>
/**
 * string_nconcat - a function that concatenates two strings,
 * followed by the first n bytes of s2
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes that takes from s2
 * Return: retuns a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, x, len1, len2;

	len1 = 0;
	len2 = 0;
	x = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		p = malloc(sizeof(char) * (len1 + n + 1));
	else
		p = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!p)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];

	while (n < len2 && i < (len1 + n))
		p[i++] = s2[x++];

	while (n >= len2 && i < (len1 + len2))
		p[i++] = s2[x++];

	p[i] = '\0';

	return (p);
}
