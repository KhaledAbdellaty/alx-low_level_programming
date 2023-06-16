#include <stdio.h>
/**
 * main - main block
 * Description: prints the lowercase alphabet in reverse,
 * Return: 0
 */
int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
