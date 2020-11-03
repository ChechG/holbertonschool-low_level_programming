#include "lists.h"

/**
 * print_listint - prints the elements of the structure h..
 * @h: struct listint_t from main.
 * Return: nodes.
 */
size_t print_listint(const listint_t *h)
{
	int nodes;

	nodes = 0;
	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		if (!(h->n))
		{
			printf("0\n");
		}
		else
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		nodes++;
	}
	return (nodes);
}
