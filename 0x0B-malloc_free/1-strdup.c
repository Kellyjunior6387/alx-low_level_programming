#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Function that returns a pointer to a new allocated space
 * @str: the copy to be duplicated
 * Return: a pointer to the string if succesfull
 */
char *_strdup(char *str)
{
	int i;
	char *string;

	i = 0;
	while (str[i] != '\0)
	{
		i++;
	}
	if (str == NULL)
		return (NULL);
	string = malloc(sizeof(char) * (i + 1));

	if (string == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		string[i] = str[i];
	}

	return (string);
}
