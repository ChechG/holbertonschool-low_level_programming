#include "lists.h"
/**
 * free_listint2 - frees the list space given..
 * @head: list given.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = (*head);
		(*head) = current->next;
		free(current);
	}
	head = NULL;
}
