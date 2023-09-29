#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed to it
 * @argc: The number of arguments passed
 * @argv: An array containing the arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
		if (*argv != NULL)
			printf("%d\n", argc - 1);
	return (0);
}
