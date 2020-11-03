#include "lists.h"
/**
 * add_nodeint_end - function that adds a nodeen the end.
 * @head: address of memory to head.
 * @n: integer.
 * Return: address.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *aux = malloc(sizeof(listint_t));
	listint_t *last = *head;
	unsigned int n2 = n;

	if (aux == NULL)
	{
		return (NULL);
	}
	aux->n = n2;
	aux->next = NULL;
	if (*head == NULL)
	{
		*head = aux;
		return (aux);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = aux;
	return (aux);
}
