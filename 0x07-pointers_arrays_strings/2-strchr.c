#include "main.h"
/**
 * _strchr : a function to look for c in s
 * @s: The string where the character is to be located
 * @c: The character to be located
 * Return: A pointer to the first occurence of c
 */
char *_strchr(char *s, char c)
{
	int i ;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s[i]);
		i++;
	}
	return (0);
}
