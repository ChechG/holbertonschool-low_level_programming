#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to.
 * @key: is the key, key can not be an empty string
 * @value: value associated with the key.
 * Return: 1 if succeed, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *aux;
	unsigned long int index = key_index((unsigned const char*)key, ht->size);

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);
	aux = (ht->array)[index];
	while (aux != NULL)
	{
		if (strcmp(key, aux->key) == 0)
		{
			free(aux->value);
			aux->value = strdup(value);
			return (0);
		}
		aux = aux->next;
	}
	new_node = malloc(ht->size * sizeof(hash_node_t *));
	if (new_node == NULL)
		return (0);
	if (ht->array[index] == NULL)
	{
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		ht->array[index] = new_node;
	}
	else
	{
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
