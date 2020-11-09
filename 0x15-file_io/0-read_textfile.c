#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: file to read and print.
 * @letters: number of letters it should read and print.
 * Return: actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fdwr, fdrd;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDWR);

	if (filename == NULL)
		return (0);
	if (fd == -1)
	{
		return (0);
	}
	fdrd = read(fd, buf, letters);
	fdwr = write(STDOUT_FILENO, buf, fdrd);
	close(fd);

	return (fdwr);

}
