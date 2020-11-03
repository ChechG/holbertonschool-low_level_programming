#include "lists.h"
/**
 * free_listint - frees the list space given..
 * @head: list given.
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	head = NULL;
}
