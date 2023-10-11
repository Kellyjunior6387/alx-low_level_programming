#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result of simple operations.
 * @argc: program arguments
 * @argv: An array of pointers to the arguments.
 * Return: Always (0).
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int number1, number2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	number1 = atoi(argv[1]);
	operator = argv[2];
	number2 = atoi(argv[3]);

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' && number2 == 0) ||
	    (*operator == '%' && number2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(number1, number2));

	return (0);
}
