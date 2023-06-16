#include <stdio.h>

/**
 * main - main block
 * Description: prints the alphabet in lowercase, followed by a new line.
 * Return: 0
 * /
 */

int main(void)
{

	char a = 'a';
	char z = 'z';

	while (a <= z)
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
