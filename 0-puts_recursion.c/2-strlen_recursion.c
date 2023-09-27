#include "main.h"
/**
 * _strlen_recursion - Function that returns length of a string
 * @s: The string whose length is to be determined
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
