#include "lists.h"
/**
 * sum_dlistint - sums the int data of a list.
 * @head: struct dlistint from main.
 * Return: n.
 */
int sum_dlistint(dlistint_t *head)
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
