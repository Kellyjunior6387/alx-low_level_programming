#include "main.h"
/**
 * main - prints all arguments it recieves
 * @argc: The number of arguments passed
 * @argv: An array of string containing the arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		_putchar(*argv[i]);
	}
	_putchar('\n');
	return (0);
}
