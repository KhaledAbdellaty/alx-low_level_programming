#include <stdio.h>
/**
 * main - main block
 * Description: prints all singlr digit numbers of base 10.
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + 48);
		num++;
	}
	putchar('\n');
	return (0);
}
