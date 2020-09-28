#include "holberton.h"
#include <string.h>
/**
 * _strcpy - check the code for Holberton School students.
 * @dest: char pointer to be determined.
 * @src: char pointer to be determined.
 * Return: 0 or 1.
 */
char *_strcpy(char *dest, char *src)
{
int a = strlen(src);
int b;
for (b = 0; b < a; b++)
{
dest[b] = src[b];
}
return (dest);
}
