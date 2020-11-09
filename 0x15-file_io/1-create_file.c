#include "holberton.h"

/**
 * create_file - function that creates a file.
 * @filename: name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success or -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;


	if (filename == NULL)
		return (-1);
	while (text_content[i] != '\0')
	{
		i++;
	}
	i++;
	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
	write(fd, text_content, i);
	}
	close(fd);
	return (1);
}
