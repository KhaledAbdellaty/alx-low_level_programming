#include "main.h"

#define ERR_USAGE "Usage: cp file_from file_to\n"
#define ERR_READ "Error: Can't read from file %s\n"
#define ERR_WRITE "Error: Can't write to %s\n"
#define ERR_CLOSE "Error: Can't close fd %d\n"
/**
 * main - a program that copies the content of
 * a file to another file
 * @ac: argument count
 * @av: array of arguments
 * Return: returns 0 on success, 1 on failure.
 */
int main(int ac, char *av[])
{
	int fd_from, fd_to;
	ssize_t r;
	char buf[BUF_SIZE];

	if (ac < 3)
		dprintf(STDERR_FILENO, ERR_USAGE), exit(97);

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, ERR_READ, av[1]), exit(98);

	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);

	if (fd_to == -1)
		dprintf(STDERR_FILENO, ERR_WRITE, av[2]), exit(98);

	while ((r = read(fd_from, buf, BUF_SIZE)) > 0)
		if (write(fd_to, buf, r) != r)
			dprintf(STDERR_FILENO, ERR_WRITE, av[2]), exit(99);
	if (r == -1)
		dprintf(STDERR_FILENO, ERR_READ, av[1]), exit(98);

	if (close(fd_from))
		dprintf(STDERR_FILENO, ERR_CLOSE, fd_from), exit(100);

	if (close(fd_to))
		dprintf(STDERR_FILENO, ERR_CLOSE, fd_to), exit(100);

	return (0);
}
