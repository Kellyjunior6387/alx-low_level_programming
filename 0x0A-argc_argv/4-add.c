#include "main.h"
/**
 * main - a program to add positive numbers
 * @argc: The number of arguments passed
 * @argv: An array of string containing the arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 1)
	{
		_putchar(0);
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= argc; i++)
		{
			if (!isdigit(argv[i]))
			{
				_putchar("Error");
				_putchar('\n');
				return (1);
			}
			sum += argv[i];
		}
		_putchar(sum);
	}
	return (0);
}

