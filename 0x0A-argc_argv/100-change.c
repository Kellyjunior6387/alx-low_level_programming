#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program to add positive numbers
 * @argc: The number of arguments passed
 * @argv: An array of string containing the arguments
 * 
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int cent , i, coins;
	int number[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		_putchar("Error");
		_putchar('\n');
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && cent >= 0; i++)
	{
		while (cent >= number[i])
		{
			coins++;
			cent -= number[i];
		}
	}
	_putchar(coins);
	_putchar('\n');
	return (0);
}
