#include "lists.h"
/**
 * pop_listint - deletes the head node of a list.
 * @head: list given.
 * Return: integer, heads node data.
 */
int pop_listint(listint_t **head)
{
	listint_t *nodo = (*head);
	int n;
	if (*head == NULL)
	{
		return (0);
	}
	n = nodo->n;
	(*head) = nodo->next;
	free(nodo);
	return(n);
}
