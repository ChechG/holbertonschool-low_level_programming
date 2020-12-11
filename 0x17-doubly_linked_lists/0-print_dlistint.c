#include "lists.h"
/**
 * print_dlistint - prints the elements of the structure h..
 * @h: struct dlistint from main.
 * Return: nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes;

	nodes = 0;
	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
