#include "lists.h"
/**
 * list_len - Counts the numebr of elements on te struct h.
 * @h: struct passed by main.
 * Return: number elements of h.
 */
size_t list_len(const list_t *h)
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
