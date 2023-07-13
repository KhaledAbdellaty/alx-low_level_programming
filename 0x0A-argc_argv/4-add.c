#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - a program that adds positive numbers.
 * @argc: the numbers of arrgumets
 * @argv: the array of arrguments
 * Return: returns 0 in success and 1 in failur;
 */
int main(int argc, char *argv[])
{
	int sum, i, x;

	sum = 0;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i] != 0; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		x = atoi(argv[argc]);
		sum += x;
	}
	printf("%d\n", sum);
	return (0);
}
