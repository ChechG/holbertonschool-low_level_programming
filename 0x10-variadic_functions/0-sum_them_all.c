#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum.
 * @n: unsigned int umber of arguments.
 * Return: result.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lista;
	unsigned int i;
	int result;

	result = 0;
	if (n == 0)
		return (0);

	if (n > 0)
	{
		va_start(lista, n);
		for (i = 0; i < n; i++)
		{
			result += va_arg(lista, int);
		}
		va_end(lista);
	}

	return (result);
}
