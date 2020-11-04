#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: struct list_t from main.
 * @idx: index of the list.
 * @n: new node to add.
 * Return: nodes.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nodo, *temp;

	nodo = (listint_t *)malloc(sizeof(listint_t));
	if (nodo == NULL)
	{
		free(nodo);
		return (NULL);
	}
	nodo->n = n;
	temp = (*head);
	if (idx == 0)
	{
		nodo->n = n;
		nodo->next = temp;
		temp = nodo;
		return (nodo);
	}
	for (i = 0; i < idx - 1 && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (temp != NULL)
	{
		nodo->n = n;
		nodo->next = temp->next;
		temp->next = nodo;
	}
	else
	{
		return (NULL);
	}
	return (nodo);
}
