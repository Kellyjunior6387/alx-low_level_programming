#include <stdio.h>
/**
 * _atoi - Function to convert string to a integer
 *@s: The string to be converted
 *Return: The integer
 */
int _atoi(char *s)
{
	int sign  = 1;
	int result = 0;

	while (*s == ' ')
	{
		s++;
	}
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	result *= sign;
	return (result);
}
