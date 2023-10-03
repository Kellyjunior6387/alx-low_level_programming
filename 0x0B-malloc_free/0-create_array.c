#include "main.h"
#include <stdlib.h>
/*
 * create_array - function that creates array of chars
 * @size: the size of the array
 * @c: the strings to be added to the array
 * Return: The array created
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
		return (NULL);
	char *array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL)
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
