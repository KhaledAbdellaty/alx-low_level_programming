#include "main.h"

int _putchar(char c)
{
	return (write(1, &c, 1));
}
void _puts(char *s)
{
	int i = 0;
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}

int _strlen(char *s)
{
	int i = 0;
	while(s[i])
		i++;

	return (i);
}
int _islower(int c)
{
	while (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) ||
	    (c >= 65 && c <= 90))
		return (1);
	return (0);
}
