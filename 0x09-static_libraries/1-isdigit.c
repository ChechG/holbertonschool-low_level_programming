#include "holberton.h"
/**
 * _isdigit - check the code for Holberton School students.
 * @c: int to be determined.
 * Return: Always 0.
 */
int _isdigit(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 120))
{
return (0);
}
else if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
