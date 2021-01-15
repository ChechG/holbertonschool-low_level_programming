#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: hash table you want to look into.
 * @key: key you are looking for.
 * Return: value.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (!ht || !key)
		return (NULL);
	index = key_index((unsigned const char*)(char *)key, ht->size);
	new_node = ht->array[index];
	while (new_node != NULL)
	{
		if (strcmp(new_node->key, key) == 0)
			return (new_node->value);
		new_node = new_node->next;
	}
	return (NULL);
}
