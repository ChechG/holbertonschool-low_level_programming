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
    
    printf("{");
    while (ht->array[j] == NULL)
    {
        j++;
    }
    if (ht != NULL)
    {
        for (i = 0; i < ht->size; i++)
        {
            aux = (ht->array)[i];
            if(aux != NULL)
            {
                if (i == j)
                {
                    printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
                }
                else
                {
                    printf(", '%s': '%s'", ht->array[i]->key, ht->array[i]->value);        
                }
            }
            if (aux == NULL)
                continue;

        }
    }
    printf("}\n");
}
