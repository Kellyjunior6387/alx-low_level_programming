#include "main.h"
/**
 * _strcpy - Function that copies string pointed to by src to dest
 * @dest: The destination to be copied
 * @src: The variable initially with the string
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
