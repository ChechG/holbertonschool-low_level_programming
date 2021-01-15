#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table.
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, flag = 0;
	hash_node_t *aux;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		aux = (ht->array)[i];
		if (aux == NULL)
			continue;
		while (aux != NULL)
		{
			if (flag == 0)
			{
				printf("'%s': ", ht->array[i]->key);
				printf("'%s'", ht->array[i]->value);
				flag += 0;
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
