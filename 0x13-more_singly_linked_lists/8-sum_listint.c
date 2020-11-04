#include "lists.h"

/**
 * sum_listint - prints the elements of the structure h..
 * @head: struct list_t from main.
 * Return: integer, sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int i, n;

	n = 0;
	if (head == NULL)
	{
		return (0);
	}

	for (i = 0; head->next != NULL; i++)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
