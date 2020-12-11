#include "lists.h"
/**
 * get_dnodeint_at_index - Frees a list.
 * @head: struct dlistint from main.
 * @index: nth node of a linked list.
 * Return: returns the nth node of a linked list.
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
