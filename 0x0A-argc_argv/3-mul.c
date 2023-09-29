#include "main.h"
/**
 * main - multiply two numbers given as arguments
 * @argc: The number of arguments given
 * @argv: An array of string containing the arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc < 3)
	{
		_putchar("Error");
		_putchar('\n');
		return (1);
	}
	else
	{
		result = *argv[1] * *argv[2];
		_putchar(result);
		_putchar('\n');
	}
		return (0);
}
