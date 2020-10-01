#include "holberton.h"
/**
 * rot13 - check the code for Holberton School students.
 * @n: char pointer to be determined.
 * Return: char.
 */
char *rot13(char *n)
{
	char abc[52] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char nop[52] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
	int i, j;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; abc[j] != '\0'; j++)
		{
			if (n[i] == abc[j])
			{
				n[i] = nop[j];
				break;
			}
		}
	}
	return (n);
}
