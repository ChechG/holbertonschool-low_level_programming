#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * @ac: number of arguments.
 * @av: strings.
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fdto, fdfrom, rd = 1, fdwr, closeto, closefrom;
	char *buf;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdto = open(av[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	fdfrom = open(av[1], O_RDONLY);
	buf = malloc(sizeof(char) * 1024);
	rd = read(fdfrom, buf, 1023);
	if (fdfrom == -1 || rd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fdwr = write(fdto, buf, rd);
	if (fdto == -1 || fdwr == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	closeto = close(fdto);
	closefrom = close(fdfrom);
	if (closeto == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fdto);
		exit(100);
	}
	if (closefrom == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fdfrom);
		exit(100);
	}
	return (0);
}
