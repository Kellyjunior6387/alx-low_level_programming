#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character provided to stdout
 * @c - the character to be printed
 * Return: On success 1
 * Return: on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
