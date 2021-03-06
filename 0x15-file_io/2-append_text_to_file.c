#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: NULL terminated string to add at the end of the file.
 * Return: 1 if the file exists or -1 if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;


	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
		write(fd, text_content, i);
	}
	close(fd);
	return (1);
}
