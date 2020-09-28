#include "holberton.h"
#include <string.h>
/**
 * rev_string - check the code for Holberton School students.
 * @s: char pointer to be determined.
 * Return: void.
 */
void rev_string(char *s)
{
int a = strlen(s) - 1;
int b = 0;
char c;
while (b < a)
{
c = s[b];
s[b] = s[a];
s[a] = c;
b++;
a--;
}
}
