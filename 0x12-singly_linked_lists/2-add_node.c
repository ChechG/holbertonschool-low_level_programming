#include "lists.h"
/**
 * add_node - function that adds a node.
 * @head: address of memory to head.
 * @str: Name string.
 * Return: address.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *string = strdup(str);
	list_t *aux;

	aux = malloc(sizeof(list_t));
	aux->str = string;
	aux->len = strlen(string);
	aux->next = *head;
	*head = aux;
	return (aux);
}
