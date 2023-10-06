#include "main.h"
#include <stdio.h>
/**
 * _realloc - Reallocates a memory block
 * @ptr: pointer to previous memory
 * @old_size: size of the ptr
 * @new_size: size of the new block
 * Return: the new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp;
	int min, i;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	temp = malloc(new_size);
	if (temp == NULL)
		return (NULL);
	min = (old_size < new_size) ? old_size : new_size;
	for (i = 0; i < min; i++)
		((char *)temp)[i] = ((char *)ptr)[i];

	free(ptr);

	return (temp);
}
