#include "holberton.h"
/**
 * swap_int - check the code for Holberton School students.
 * @a: int pointer to be determined.
 * @b: int pointer to be determined.
 * Return: void.
 */
void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
