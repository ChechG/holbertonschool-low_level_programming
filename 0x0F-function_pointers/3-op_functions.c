#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"
#include "3-calc.h"
/**
 * op_add - check if a number is equal to 98
 * @a: the integer to check
 * @b: pointer to array.
 * Return: result.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - check if a number is equal to 98
 * @a: the integer to check
 * @b: pointer to array.
 * Return: result.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - check if a number is equal to 98
 * @a: the integer to check
 * @b: pointer to array.
 * Return: result.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - check if a number is equal to 98
 * @a: the integer to check
 * @b: pointer to array.
 * Return: result.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - check if a number is equal to 98
 * @a: the integer to check
 * @b: pointer to array.
 * Return: result.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
