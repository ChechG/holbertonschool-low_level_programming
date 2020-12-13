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
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 1; temp != NULL && i < index; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	if (*head == temp)
		*head = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	free(temp);
	return (1);
}
