#include "main.h"
/**
 * print_env - a function that prints a string, in reverse, followed by a new line.
 * @s: a string
 */
void print_env(char *s)
{
	int length = 0;
	int last_index;

	while (s[length] != '\0')
	{
		length++;
	}

	for (last_index = (length - 1); last_index >= 0; last_index--;)
	{
		_putchar(s[last_index]);
	}
	_putchar('\n');
}
