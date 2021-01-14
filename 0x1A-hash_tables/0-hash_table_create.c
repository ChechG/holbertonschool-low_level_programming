#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array.
 * Return: pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (size < 1)
		return (NULL);
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->array = malloc(size * sizeof(**hash_node_t));
	if (ht->array == NULL)
		return (NULL);
	ht->size = size;
	return (ht);
}
