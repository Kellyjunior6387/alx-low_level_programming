#include  "hash_tables.h"
/**
 * hash_table_set - Function to add elements to hash table
 * @ht: Hash table to be added or updated
 * @key: the key
 * @value: vale associated with key
 * Return: 1 if succesful otherwise 0
 */
 int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *current, *new;

	if (ht == NULL || key == NULL ||  *key == '\0' || 
			value == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	current = ht->array[i];
	while (current != NULL)
	{
		if (strcmp(current->key,key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (new->key == NULL || new->value == NULL)
	{
		free(new->key);
		free(new->value);
		free(new);
		return (0);
	}
	new->next = ht->array[i];
	ht->array[i] = new;

	return (1);
}
