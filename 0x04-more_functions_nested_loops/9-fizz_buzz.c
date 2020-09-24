#include "holberton.h"
#include <stdio.h>

/**
 * fizzbuzz - check the code for Holberton School students.
 * Return: void.
 */
void fizzbuzz(void)
{
int a;
for (a = 1; a <= 100; a++)
{
if (a % 3 == 0 && !(a % 5 == 0))
printf("Fizz");
else if (a % 5 == 0 && !(a % 3 == 0))
printf("Buzz");
else if (a % 3 == 0 && a % 5 == 0)
printf("FizzBuzz");
else
printf("%d", a);

if (a != 100)
{
printf(" ");
}
}
printf("\n");
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
fizzbuzz();
return (0);
}
