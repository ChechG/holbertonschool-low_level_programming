#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, m;
for (n = 48; n <= 57; n++)
{
for (m = 48; m <= 57; m++)
{
putchar(n);
putchar(m);
if (n + m != 114)
{
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
