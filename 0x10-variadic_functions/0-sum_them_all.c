#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	va_list lista;
	unsigned int i;
	int result;

	result = 0;
	if (n > 0)
	{
		va_start(lista, n);
		for (i = 0; i < n; i++)
		{
			result += va_arg(lista, int);
		}
	}
	return (result);
}
