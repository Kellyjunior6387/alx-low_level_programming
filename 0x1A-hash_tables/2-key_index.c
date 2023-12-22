#include "hash_tables.h"
/**
 * key_index - Function to give the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 * Return: Index the index where the key is stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash  = hash_djb2(key);

	return (hash % size);
}
