#include "main.h"
/**
 * _memset - To fill the first n bytes of the area pointed by s with b
 * @s: The memory area pointed
 * @b: the bytes to be filled
 * @n: The number of bytes to be with filled
 * Return: The pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
