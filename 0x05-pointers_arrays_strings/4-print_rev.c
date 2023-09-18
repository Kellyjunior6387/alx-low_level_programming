#include "main.h"
/**
 * print_rev - A function that prints a string in reverse 
 * followed by a new line
 * @s: The string to be reversed
 */
void print_rev(char *s)
{
	int i;
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	for (i = l - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
