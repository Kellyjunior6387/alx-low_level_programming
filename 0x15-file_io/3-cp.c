#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if file can be opened
 * @file_from: file_from
 * @file_to: file_to
 * @argv: arguments vector
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - implements the code
 * @argc: Number of arguments
 * @argv: arguments vector
 * Return: 0 if succesful
 */
int main(int argc, char *argv[])
{
	int filef, filet, err;
	ssize_t number, wr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	filef = open(argv[1], O_RDONLY);
	filet = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC |
			O_APPEND, 0664);
	error_file(filef, filet, argv);

	number = 1024;
	while (number == 1024)
	{
		number = read(filef, buf, 1024);
		if (number == -1)
			error_file(-1, 0, argv);
		wr = write(filet, buf, number);
		if (wr == -1)
			error_file(0, -1, argv);
	}
	err = close(filef);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filef);
		exit(100);
	}
	err = close(filet);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filef);
		exit(100);
	}
	return (0);
}
