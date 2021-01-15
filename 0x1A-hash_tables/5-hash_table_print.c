#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table.
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, j = 0;
	hash_node_t *aux;

	if (ht == NULL || ht->array == NULL || key == NULL)
		return;
	printf("{");
	while (ht->array[j] == NULL)
	{
		j++;
	}
	for (i = 0; i < ht->size; i++)
	{
		aux = (ht->array)[i];
		while (aux != NULL)
		{
			if (i == j)
			{
				printf("'%s': ", ht->array[i]->key);
				printf("'%s'", ht->array[i]->value);
			}
			else
			{
				printf(", '%s': ", ht->array[i]->key);
				printf("'%s'", ht->array[i]->value);
			}
			aux = aux->next;
		}
	}
	printf("}\n");
}
