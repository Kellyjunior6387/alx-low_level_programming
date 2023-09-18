include "main.h"
/**
 * _strlen - Function that returns the length of a string
 * @s: The string whose length is to be determined
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
}

