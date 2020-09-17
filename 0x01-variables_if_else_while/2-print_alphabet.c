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
char alpha[27] = {"abcdefghijklmnopqrstuvwxyz"};
int n;
for (n = 0; n < 27; n++)
{
putchar(alpha[n]);
}
putchar('\n');
return (0);
}
