#include "main.h"
/**
 * string_toupper - changes lowercase letters to uppercase
 * @str: The string
 * Return: str The converted uppercase letter
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
