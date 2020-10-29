#include "lists.h"
/**
 * add_node - function that adds a node.
 * @head: address of memory to head.
 * @str: Name string.
 * Return: address.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *aux;
	int i = 0;
	char *string = strdup(str);

	while (str[i] != '\0')
	{
		i++;
	}
	aux = malloc(sizeof(list_t));
	aux->str = string;
	aux->len = i;
	aux->next = *head;
	*head = aux;
	return (aux);
}
