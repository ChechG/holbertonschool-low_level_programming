#include "holberton.h"
/**
 * _isupper - check the code for Holberton School students.
 * @c: int to be determined.
 * Return: 0 or 1.
 */
int _isupper(int c)
{
if (c >= 97 && c <= 120)
{
return (1);
}
else if (c >= 65 && c <= 90)
return (0);

return (0);
}
