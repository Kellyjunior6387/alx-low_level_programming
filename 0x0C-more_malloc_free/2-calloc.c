#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Functions that allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 * Return: a pointer to the memory if succesful
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *string;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	string = malloc(nmemb * size);
	if (string == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		string[i] = 0;

	return (string);
}
