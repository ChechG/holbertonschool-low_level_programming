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
int n, m, o;
for (n = 48; n <= 57; n++)
{
for (m = n + 1 ; m <= 57; m++)
{
for (o = m + 1; o <= 57; o++)
{
putchar(n);
putchar(m);
putchar(o);
if (m + n + o != 168)
{
putchar(44);
putchar(32);
}
}
}
}
putchar('\n');
return (0);
}
