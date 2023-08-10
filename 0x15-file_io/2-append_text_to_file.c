#include "main.h"

/**
 *_strlen - a function that return the length
 * of string
 * @str: the string
 * Return: returns long integer value
 */

ssize_t _strlen(const char *str)
{
	if (!str || !*str)
		return (0);

	return (_strlen(str + 1) + 1);
}

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: the name of the file .
 * @text_content: the string to add at the end of the file .
 * Return: 1 on success, or -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t strlen = _strlen(text_content);
	int fp;

	if (!filename)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
		return (fp);
	if (strlen)
	{
		if (write(fp, filename, strlen) == -1)
			return (-1);
	}
	close(fp);
	return (1);
}
