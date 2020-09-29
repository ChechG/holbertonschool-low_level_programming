#include "holberton.h"
#include <string.h>
/**
 * _strlen - check the code for Holberton School students.
 * @s: int pinter to be determined.
 * Return: 0 or 1.
 */
int _strlen(char *s)
{
int n = 0;
while (s[n] != '\0')
{
n++;
}
return (n);
}
