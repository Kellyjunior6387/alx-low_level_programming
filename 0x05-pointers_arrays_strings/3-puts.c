#include "main.h"
/**
 * _puts - function to print a string followed by a new line
 * @str: The string to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
