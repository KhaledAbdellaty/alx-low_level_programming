#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	char zero = '0';

	while (zero <= '9')
	{
		putchar(zero);
		zero++;
	}
	zero = 'a';

	while (zero <= 'f')
	{
		putchar(zero);
		zero++;
	}

	putchar('\n');
	return (0);
}
