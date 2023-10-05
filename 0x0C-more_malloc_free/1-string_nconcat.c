#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Function that concatenates two strings and
 * return a pointer to the newly allocated space
 * @s1: input
 * @s2: input
 * @n: number of bytes to be copied
 * Return: the newly allocated or null if not succesfully
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, length1, length2;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length1 = 0;
	length2 = 0;
	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;

	if (n >= length2)
		n = length2;

	string = malloc(sizeof(char) * (length1 + n + 1));
	if (string == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		string[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		string[i] = s2[j];

	string[i] = '\0';
	return (string);
}
