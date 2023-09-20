#include "main.h"
/**
 * _strncat - contacenate the two provided strings
 * @dest: The string with the data
 * @src: The string to copied to
 * @n: The string copied to
 *
 * Return: dest the copied string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
