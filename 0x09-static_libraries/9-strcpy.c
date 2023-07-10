#include "main.h"
/**
 * _strcpy - a function that copies the string
 * pointed to by src to the buffer pointed to by dest.
 * @dest: is an array that hold the string value
 * @src: is a string
 * Return: array value to the pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
