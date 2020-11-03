#include "lists.h"
/**
 * reverse_listint - function that reverses a list.
 * @head: address of memory to head.
 * Return: node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (current);
}
