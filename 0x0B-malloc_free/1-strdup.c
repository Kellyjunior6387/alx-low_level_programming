#include "main.h"
/**
 * _strdup - Function that returns a pointer to a new allocated space
 * @str: the copy to be duplicated
 * Return: a pointer to the string if succesfull
 */
char *_strdup(char *str)
{
	unsigned int i;
	int length;

	length = strlen(str);
	if (str == NULL)
		return (NULL);
	char *string = malloc(sizeof(char) * (length + 1));

	if (string == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		string[i] = str[i];
	}
	string[length] = '\0';

	return (string);
}
