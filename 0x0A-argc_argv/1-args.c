#include "main.h"
/**
 * main - prints the number of arguments passed to it
 * @argc: The number of arguments passed
 * @argv: An array containing the arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int n;

	i = 0;
	while (i < argc)
	{
		if (*argv[i] != '\0')
			++n;
	}
	_putchar(n);
	_putchar('\n');
	return (0);
}
