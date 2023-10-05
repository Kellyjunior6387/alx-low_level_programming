#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Function that creates an array of integers
 * @min: start
 * @max: end
 * Return: Pointer to the array
 */
int *array_range(int min, int max)
{
	int i, num;
	int *array;

	if (min > max)
		return (NULL);
	num = (max - min) + 1;
	array = malloc(sizeof(int) * num);
	if (array == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		array[i] = min;

	return (array);
}
