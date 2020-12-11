#include "lists.h"
/**
 * dlistint_len - Returns number of nodes from struct.
 * @h: struct dlistint from main.
 * Return: nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodes;

	nodes = 0;
	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
