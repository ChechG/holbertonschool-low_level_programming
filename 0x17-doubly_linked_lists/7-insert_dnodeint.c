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
	{
		free(nodo);
		return (NULL);
	}
	nodo->n = n;
	new = (*h);
	if (idx == 0)
	{
		nodo->n = n;
		nodo->next = (*h);
		(*h) = nodo;
		return (nodo);
	}
	for (i = 0; i < idx - 1 && new != NULL; i++)
	{
		new = new->next;
	}
	if (new == NULL)
		return (NULL);
	nodo->n = n;
	nodo->next = new->next;
	new->next = nodo;
	return (nodo);
}
