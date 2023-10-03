#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - Function that returns a pointer to a space with
 * contents of s1 followed by s2
 * @s1: input
 * @s2: input
 * Return: The newly allocated memory
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}

	concat = malloc(sizeof(char) * ((i + j) + 1));

	if (concat == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		string[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		string[i] = s2[j];
		j++;
		i++;
	}
	concat[i] = '\0';

	return (concat);
}

