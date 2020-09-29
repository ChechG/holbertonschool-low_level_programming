#include "holberton.h"
/**
 * _pow - check the code for Holberton School students.
 * @n: string pointer to be determined.
 * Return: int.
 */
int _pow(int n)
{
int res = 1;
for (int i = 0; i < n; i++)
{
res *= 10;
}
return (res);
}
/**
 * _atoi - check the code for Holberton School students.
 * @s: string pointer to be determined.
 * Return: int.
 */
int _atoi(char *s)
{
int ini, fin, x, z, res, sig;
sig = 1;
res = 0;
z = 0;
for (x = 0; s[x] < '0' || s[x] > '9'; x++)
{
if (s[x] == '-')
{
sig *= -1;
}
}
ini = x;
for (; (s[x] >= '0' && s[x] <= '9') && (s[x] != '\0'); x++)
{
fin = x;
}
for(; fin >= ini; fin--, z++)
{
res += ((s[fin] - '0') * _pow(z)) * sig;
}
return (res);
}
