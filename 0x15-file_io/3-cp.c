#include "holberton.h"

void close_func(int a);
/**
 * main - check the code for Holberton School students.
 * @ac: number of arguments.
 * @av: strings.
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fdto, fdfrom, rd = 1, fdwr;
	char *buf;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdto = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (fdto == -1)
		dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);
	fdfrom = open(av[1], O_RDONLY);
        if (fdfrom == -1)
                dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		return (0);
	while (rd > 0)
	{
		rd = read(fdfrom, buf, 1024);
		if (rd == -1)
		{
			free(buf);
			dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);
		}
		if (rd > 0)
		{
			fdwr = write(fdto, buf, rd);
			if (fdwr == -1)
			{
				free(buf);
				dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);
			}
		}
	}
	free(buf);
	close_func(fdto);
	close_func(fdfrom);
	return (0);
}
/**
 * close_func - check the code for Holberton School students.
 * @a: int fd.
 * Return: void.
 */
void close_func(int a)
{
	int close_a;

	close_a = close(a);
	if (close_a == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", a);
		exit(100);
	}
}
