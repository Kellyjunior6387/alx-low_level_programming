#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - contacenates all arguments of a program
 * @ac: The number of arguments
 * @av: An array containing the arguments
 * Return: The contacenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, length;
	char *string;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			length++;
		}
	}

	string = malloc(sizeof(char) * length + 1);
	if (string == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			string[k++] = av[i][j];
		}
		string[k++] = '\n';
	}
	string[k] = '\0';
	return (string);
}
