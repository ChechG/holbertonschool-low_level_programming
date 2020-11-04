#include "lists.h"

/**
 * sum_listint - prints the elements of the structure h..
 * @head: struct list_t from main.
 * Return: integer, sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int n;

	if (head == NULL)
	{
		return (0);
	}
	n = 0;
	while (head != NULL)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
