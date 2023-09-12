#include  "main.h"

/**
 * _islower - to check if character is lowercase
 * @c : the character to be checked
 * Return: 1 if the character is lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
