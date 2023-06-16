#include <studio.h>
/*
 *main - main block
 *Description: prints the alphabet in lowercase, followed by a new line
 *Return: 0
 */

int main(void)
{
	char a = 'a';

	while (a < 'z')
	{
		if (a != 'q' && a != 'e')
		{
			putchat(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
