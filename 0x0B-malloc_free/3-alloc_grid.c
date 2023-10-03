#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 *and initialise all of it with 0
 * @width: width of the array
 * @height: height of the array
 * Return: A pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = malloc(sizeof(int) *  height);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
		for (; i >= 0; i--)
		{
			free(array[i]);
		}
		free(array);
		return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}

