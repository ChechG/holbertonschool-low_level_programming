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
int a, b, c, d;

for (a = 48; a < 58; a++)
{
for (b = 48; b < 58; b++)
{
for (c = 48; c < 58; c++)
{
for (d = 48; d < 58; d++)
{
if (a < c || (a == c && b < d))
{
putchar(a);
putchar(b);
putchar(32);
putchar(c);
putchar(d);
if (a + b < 113)
{
putchar(44);
putchar(32);
}
}
}
}
}
}
putchar('\n');
return (0);
}
