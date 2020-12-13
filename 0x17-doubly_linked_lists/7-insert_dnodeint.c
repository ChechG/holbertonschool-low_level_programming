#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at index.
 * @h: struct dlistint from main.
 * @idx: nth position of a linked list.
 * @n: new integer to add.
 * Return: address of new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *nodo, *new;

	nodo = malloc(sizeof(dlistint_t));
	if (nodo == NULL)
		return (NULL);
	new = (*h);
	if (new == NULL)
		return (NULL);
	nodo->prev = NULL;
	nodo->next = NULL;
	nodo->n = n;
	if (idx == 0)
	{
		if (*h == NULL)
			(*h) = nodo;
		else
		{
			nodo->next = (*h);
			new->prev = nodo;
			(*h) = nodo;
		}
		return (nodo);
	}
	for (i = 0; i < idx - 1 || i + 1 == idx; i++)
	{
		if (i + 1 == idx)
		{
			if (new->next != NULL)
				new->next->prev = nodo;
			nodo->next = new->next;
			new->next = nodo;
			nodo->prev = new;
			return (nodo);
		}
		new = new->next;
	}
	free(nodo);
	return (NULL);
}
