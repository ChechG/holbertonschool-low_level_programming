#include "lists.h"

/**
 * get_nodeint_at_index - prints the elements of the structure h..
 * @head: struct list_t from main.
 * @index: - integer.
 * Return: nodes.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *nodo = head;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	nodo = head;
	return (nodo);
}
