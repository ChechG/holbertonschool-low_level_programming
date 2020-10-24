#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - check the code for Holberton School students.
 * @separator: coma y espacio.
 * @n: number of arguments.
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lista;
	char *p;

	if (n > 0 && separator != NULL)
	{
		va_start(lista, n);
		for (i = 0; i < n; i++)
		{
			p = va_arg(lista, char *);
			if (p != NULL)
			{
				printf("%s", p);
				if (i < n - 1)
				{
					printf("%s", separator);
				}
			p = "";
			}
			else
				printf("(nil)");
		}
		printf("\n");
		va_end(lista);
	}
}
