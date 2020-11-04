#include "lists.h"
/**
 * free_listint2 - frees the list space given..
 * @head: list given.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *tmp;

	current = (*head);
	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	(*head) = NULL;
}
