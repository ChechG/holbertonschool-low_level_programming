#include "lists.h"
/**
 * get_dnodeint_at_index - Frees a list.
 * @head: struct dlistint from main.
 * @index: nth node of a linked list.
 * Return: returns the nth node of a linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *nodo = head;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
	}
	nodo = head;
	return (nodo);
}
