#include "lists.h"

/**
 * delete_nodeint_at_index - deletes element of number index.
 * @head: struct list_t from main.
 * @index: number of the index that is deleted.
 * Return: nodes.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = *head;
	listint_t *luego;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; temp != NULL && i < index - 1; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}
	luego = temp->next->next;
	free(temp->next);
	temp->next = luego;
	return (1);
}
