#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * 0-9 48-57    A-F 65-70
 */
int main(void)
{
int n;
for (n = 48; n <= 102; n++)
{
if (n <= 57 || n >= 97)
{
putchar(n);
}
}
putchar('\n');
return (0);
}
