#include"main.h"
/**
 * main - main block.
 * Description: a program that prints _putchar
 * Return: 0
 */

int main(void)
{
	char str[] = "_putchar";
	int x = 0;

	while (x < 8)
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');

	return (0);
}
