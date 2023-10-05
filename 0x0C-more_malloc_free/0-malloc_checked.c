#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - Function that allocates memory
 *@b: size to be allocated
 *Return: 98 if error
 */
void *malloc_checked(unsigned int b)
{
	char *string;

	string = malloc(b);
	if (string == NULL)
		return (98);
	return (string);
}
