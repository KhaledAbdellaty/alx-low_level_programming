#include"main.h"
/**
 * main - main block.
 * Description: a program that prints _putchar
 * Return: 0
 */

int main(void)
{
	char str[] = "_putchar";

	for (int x = 0; x < 8; ++x)
		_putchar(str[x]);
	_putchar('\n');

	return (0);
}
