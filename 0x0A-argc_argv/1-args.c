#include <stdio.h>
/**
 * main - a program that prints the number
 * of arguments passed into it.
 * @argc: the number of arguments
 * @argv: the array of arrguments
 * Return: returns 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
