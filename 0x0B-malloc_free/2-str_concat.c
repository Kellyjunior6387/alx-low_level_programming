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
	int i, s1_length, s2_length;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_length = strlen(s1);
	s2_length = strlen(s2);

	concat = malloc(sizeof(char) * ((s1_length + s2_length) + 1);

	if (concat == NULL)
		return (NULL);
	strncpy(concat, s1, s1_length);
	strncpy(concat + s1_length, s2, s2_length);

	concat[s1_length + s2_length] = '\0';

	return (concat);
}

