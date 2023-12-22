#include "hash_tables.h"
/**
 * hash_table_print - Function to print a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int flag = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current)
		{
			if(!flag)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			flag = 0;
			current = current->next;
		}
	}
	printf("}");
}
