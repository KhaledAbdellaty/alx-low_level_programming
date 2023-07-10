#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two arguments
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc < 3)
		printf("Error\n");
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", sum);
	}
	return (0);
}

