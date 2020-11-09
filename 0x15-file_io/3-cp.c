#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * @ac: number of arguments.
 * @av: strings.
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fdto, fdfrom, rd;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdto = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	fdfrom = open(av[1], O_RDONLY);
	if (fdfrom == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (fdto == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	rd = read(fdfrom, buf, 1024);
	write(fdto, buf, rd);
	close(fdto);
	close(fdfrom);
	if (fdto == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fdto);
		exit(100);
	}
	if (fdfrom == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fdfrom);
		exit(100);
	}

	return (0);

}
