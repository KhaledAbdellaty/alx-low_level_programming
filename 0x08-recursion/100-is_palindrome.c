#include "main.h"
/**
 * get_strlen - a function to get the length
 * of the string
 * @s: is a string
 * Return: returns length of the string
 */
int get_strlen(char *s)
{
	if (!*s)
		return (0);
	return (1 + get_strlen(s + 1));
}
/**
 * _is_palindrome - a function that check if the string
 * is a palindrome
 * @s: is a string
 * @i: the index of the array
 * @s: is a length of the string
 * Return: returns 1, or 0
 */
int _is_palindrome(char *s, int i, int len)
{
	if (i >= len)
		return (1);
	if (s[i] != s[len - 1])
		return (0);
	return (_is_palindrome(s, i + 1, len - 1));
}
/**
 * is_palindrome - a function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: is a string
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	if (!*s)
		return (1);
	int len;

	len = get_strlen(s);
	return (_is_palindrome(s, 0, len));
}
