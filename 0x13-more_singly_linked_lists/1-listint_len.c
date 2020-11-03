#include "lists.h"
/**
 * listint_len - returns the elements of the array.
 * @h: struct listint_t from main.
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int elements;

	elements = 0;
	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
