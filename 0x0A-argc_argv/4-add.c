#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - a program to add positive numbers
 * @argc: The number of arguments passed
 * @argv: An array of string containing the arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
		for (i = 1; i <= argc; i++)
		{
			for (int j = 0; argv[i][j] != '\0'; j++)
			{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	return (0);
}
