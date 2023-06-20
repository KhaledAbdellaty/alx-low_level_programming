#include"main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet,
 */
void print_alphabet_x10(void)
{
	int x = 0;
	char a;

	while (x < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		x++;
	}
}
