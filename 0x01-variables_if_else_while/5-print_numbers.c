#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10.
 * Return: 0
 */
int main(void)
{
	char num0 = '0';

	while (num0 <= '9')
	{
		putchar(num0);
		num0++;
	}

	putchar('\n');
	return (0);
}
