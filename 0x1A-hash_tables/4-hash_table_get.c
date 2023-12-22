#include "hash_tables.h"
/**
 * hash_table_get - Function to retrieve a
 * value with an associated key
 * @ht: The hash table
 * @key: The key to be looked for
 * Return: The value of the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	current = ht->array[i];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
