#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index.
 * @head: struct dlistint from main.
 * @index: nth position of a linked list.
 * Return: 1 or -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			(*head)->prev = NULL;
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
	temp->next = temp->next->next;
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
