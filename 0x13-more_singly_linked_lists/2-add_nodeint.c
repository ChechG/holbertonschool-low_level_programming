#include "lists.h"
/**
 * add_nodeint - function that adds a node.
 * @head: address of memory to head.
 * @n: integer.
 * Return: address.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *aux;
	unsigned int n2 = n;

	aux = malloc(sizeof(listint_t));
	if (aux == NULL)
		return (NULL);

	aux->n = n2;
	aux->next = *head;
	*head = aux;
	return (aux);
}
