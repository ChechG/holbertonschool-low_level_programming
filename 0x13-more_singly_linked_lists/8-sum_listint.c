#include "lists.h"

/**
 * sum_listint - prints the elements of the structure h..
 * @head: struct list_t from main.
 * Return: integer, sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int i, n;
	if (head == NULL)
	{
		return (0);
	}

	for (i = 0; head->next != NULL; i++)
	{
		head = head->next;
		n += head->n;
	}
	return (n);
}
