#include <stdio.h>
#include "holberton.h"
/**
 * fibonacci - check the code for Holberton School students.
 * Return: void.
 */
void fibonacci(void)
{
signed long int a, fib, fib_ant, fib2;
fib = 1;
fib_ant = 0;
for (a = 0; a <= 49; a++)
{
fib2 = fib + fib_ant;
printf("%ld", fib2);
fib_ant = fib;
fib = fib2;
if (a != 49)
{
printf(", ");
}
}
printf("\n");
}
/**
 * main - check the code for Holberton School students.
 * Return: void.
 */
int main(void)
{
fibonacci();
return (0);
}
