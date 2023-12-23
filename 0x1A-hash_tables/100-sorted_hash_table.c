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
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new;
	unsigned long int i;

	new = malloc(sizeof(shash_table_t));
	if (new == NULL)
		return (NULL);

	new->size = size;
	new->array = malloc(sizeof(shash_node_t *) * size);
	if (new->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		new->array[i] = NULL;
	new->shead = NULL;
	new->stail = NULL;

	return (new);
}
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *ptr;
	unsigned long int i;
	char *duplicate;

	if (ht == NULL || *key == '\0' || key == NULL || value == NULL)
		return (0);
	

