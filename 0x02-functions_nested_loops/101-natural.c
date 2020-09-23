#include "holberton.h"
#include <stdio.h>
/**
 * natural - check the code for Holberton School students.
 * Return: void.
 */
void natural(void)
{
int a, sum;
sum = 0;
for (a = 0; a < 1024; a++)
{
if ((a % 3 == 0) || (a % 5 == 0))
{
sum += a;
}
}
printf("%d\n", sum);
}
/**
 * main - check the code for Holberton School students.
 * Return: void.
 */
int main(void)
{
natural();
return (0);
}
