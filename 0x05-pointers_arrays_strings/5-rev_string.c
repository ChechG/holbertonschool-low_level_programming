#include "holberton.h"
/**
 * rev_string - check the code for Holberton School students.
 * @s: char pointer to be determined.
 * Return: void.
 */
void rev_string(char *s)
{
int a = 0;
int b = 0;
char c;

while (s[a] != '\0')
a++;

a -= 1;
while (b < a)
{
c = s[b];
s[b] = s[a];
s[a] = c;
b++;
a--;
}
}
