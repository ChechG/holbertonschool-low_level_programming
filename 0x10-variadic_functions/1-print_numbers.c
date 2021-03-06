#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - check the code for Holberton School students.
 * @separator: pointer to string.
 * @n: number of arguments
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lista;

	if (n > 0)
	{
		va_start(lista, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(lista, int));
			if (i < n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(lista);
	}
	printf("\n");
}
