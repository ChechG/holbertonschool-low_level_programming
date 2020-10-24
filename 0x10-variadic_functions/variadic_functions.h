#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct tipo - sum.
 * @car: caracter constant.
 * @f: function asociated to car.
 */
typedef struct tipo
{
	char *car;
	void (*f)();

} tipos;
#endif
