#include "main.h"

/**
 * read_textfile - a function that reads a text
 * file and prints it to the POSIX standard output.
 * @filename: a text file that will read.
 * @letters: the number of letters it should read.
 * Return: the number of letters, or 0 .
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num = 0;
	char buf[BUF_SIZE * 8];
	int fp;

	if (!filename || !letters)
		return (num);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (num);

	num = read(fp, &buf[0], letters);
	num = write(STDOUT_FILENO, &buf[0], num);

	close(fp);

	return (num);
}
