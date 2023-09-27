#include "main.h"
/**
 * wildcmp - Function to compare 2 strings
 * @s1: First input
 * @s2: Second input
 * Return: 1 if identical 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
	{
		return (1);
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
	if (*s2 == *s1)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
