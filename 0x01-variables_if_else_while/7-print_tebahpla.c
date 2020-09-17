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
char alpha[26] = {"abcdefghijklmnopqrstuvwxyz"};
int n;
    
for (n = 25; n >= 0; n--)
{
putchar(alpha[n]);
}
putchar('\n');
return (0);
}
