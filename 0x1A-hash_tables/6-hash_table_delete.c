#include "hash_tables.h"
/**
 * hash_table_delete - Counts the numebr of elements on te struct h.
 * @ht: hash table.
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *current;
	hash_node_t *next;

	while (i < ht->size)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			next = current->next;
			free(current->value);
			free(current->key);
			free(current);
			current = next;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
