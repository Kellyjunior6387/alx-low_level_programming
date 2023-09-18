#include "main.h"
/**
 * print_rev - A function that prints a string in reverse followed by a new line
 * @s: The string to be reversed
 */
void print_rev(char *s)
{
	int l = 0;

	while (s[length] != '\0')
	{
		l++;
	}
	int i;

	for (i = length -1; i >=0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
	
