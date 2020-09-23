#include <stdio.h>
#include "holberton.h"
/**
 * fibonacci2 - check the code for Holberton School students.
 * Return: void.
 */
void fibonacci2(void)
{
signed long int a, fib, fib_ant, fib2, result;
fib = 1;
fib_ant = 0;
result = 0;
for (a = 0; a < 32; a++)
{
fib2 = fib + fib_ant;
fib_ant = fib;
fib = fib2;
if (fib2 % 2 == 0)
{
result += fib2;
}
}
printf("%ld\n", result);
}

/**
 * main - check the code for Holberton School students.
 * Return: void.
 */
int main(void)
{
fibonacci2();
return (0);
}
