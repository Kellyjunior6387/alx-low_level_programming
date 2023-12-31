#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c : The character to be checked
 * Return: (1) if the character is a letter, if not (0)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
