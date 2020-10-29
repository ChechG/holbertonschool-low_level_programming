#include "lists.h"
/**
 * add_node_end - add node at the end of the struct.
 * @head: structure.
 * @str: string.
 * Return: adress to struct.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *aux = malloc(sizeof(list_t));
	list_t *last = *head;
	char *string = strdup(str);
	int i = 0;

	if (aux == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	aux->str = string;
	aux->len = i;
	aux->next = NULL;
	if (*head == NULL)
	{
		*head = aux;
		return (aux);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = aux;
	return (aux);
}
