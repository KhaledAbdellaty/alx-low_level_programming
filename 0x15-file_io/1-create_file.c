#include "main.h"
/**
 *_strlen - a function that return the length
 * of string
 * @str: the string
 * Return: returns long integer value
 */

ssize_t _strlen(const char *str)
{
	if (!*str)
		return (0);
	return (_strlen(str + 1) + 1);
}
/**
 * create_file - a function that creates a file.
 * @filename: the file to create.
 * @text_content: the string to write to the file.
 * Return: reurns 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t strlen = _strlen(text_content);

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fp == -1)
		return (fp);

	if (strlen)
	{
		if (write(fp, text_content, strlen) == -1)
			return (-1);
	}

	close(fp);
	return (1);
}
