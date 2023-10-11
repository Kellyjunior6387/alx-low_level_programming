#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function that searches for an integer
 * @array: input
 * @size: size of thev array
 * @cmp: pointer to a function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, value;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		value = cmp(array[i]);
		if (value != 0)
			return (i);
	}
	return (-1);
}

