#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_ifnumber - check - string there are digit
 * @str: array str
 * Return: Always 0
 */
int check_ifnumber(char *str)
{
	  unsigned int i;

	i = 0;
	while (i < strlen(str))

	{
		if (!isdigit(str[i]))
		{
			return (0);
		}

		i++;
	}
	return (1);
}
/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	int convert;
	int result = 0;

	i = 1;
	while (i < argc)
	{
		if (check_ifnumber(argv[i]))

		{
			convert = atoi(argv[i]);
			result += convert;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		i++;
	}
	printf("%d\n", result);
	return (0);
}