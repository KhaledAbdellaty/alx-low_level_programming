#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: is a string
 */
void puts_half(char *str)
{
	int i, n;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 1)
	{
		for (n = (i - 1) / 2; n < i - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	else
	{
		for (n = (i / 2); n < i; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}



