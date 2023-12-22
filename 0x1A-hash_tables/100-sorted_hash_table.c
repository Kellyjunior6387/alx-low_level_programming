#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of new sorted hash table.
 * Return: If an error occurs - NULL.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new;
	unsigned long int i;

	new = malloc(sizeof(shash_table_t));
	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(shash_node_t) * size);
	if (new->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		new->array[i] = NULL;
	new->shead = NULL;
	new->stail = NULL;

	return (new);
}
/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *ptr;
	unsigned long int i;
	char *duplicate;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	duplicate = strdup(value);
	if (duplicate == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	ptr = ht->shead;
	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value);
			ptr->value = duplicate;
			return (1);
		}
		ptr = ptr->next;
	}
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(duplicate);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(duplicate);
		free(new);
		return (0);
	}
	new->value = duplicate;
	new->next = ht->array[i];
	ht->array[i] = new;

	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		ptr = ht->shead;
		while (ptr->snext != NULL && strcmp(ptr->snext->key, key)
			 < 0)
			ptr = ptr->next;
		new->sprev = ptr;
		new->snext = ptr->snext;
		if (ptr->snext == NULL)
			ht->stail = new;
		else
			ptr->snext->sprev = new;
		ptr->snext = new;
	}
	return (1);
}
/**
 * shash_table_get - Retrieve the value associated with
 *                   a key in a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i;
	shash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	current = ht->array[i];
	while (current != NULL)
	{
		if (strcmp(current->key,key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *ptr;

	if (ht == NULL)
		return;

	ptr = ht->shead;
	printf("{");
	while (ptr != NULL)
	{
		printf("'%s': '%s'", ptr->key, ptr->value);
		ptr = ptr->snext;
		if (ptr != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *ptr;

	if (ht == NULL)
		return;

	ptr = ht->stail;
	printf("{");
	while (ptr != NULL)
	{
		printf("'%s': '%s'", ptr->key, ptr->value);
		ptr = ptr->sprev;
		if (ptr != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *current, *next;

	if (ht == NULL)
		return;

	current = ht->shead;
	while (current)
	{
		next = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = next;
	}

	free(head->array);
	free(head);
}
