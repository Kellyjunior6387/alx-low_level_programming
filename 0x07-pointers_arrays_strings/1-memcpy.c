#include "main.h"
/**
 * _memcpy - Function to copy n bytes from src to dest
 * @dest: The area to be copied to
 * @src: The area to be copied from
 * @n: The number of bytes to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
