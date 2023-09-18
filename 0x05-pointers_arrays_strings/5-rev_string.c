#include "main.h"
/**
* rev_string - A function that prints a string
* in reverse followed by a new line
* @s: The string to be reversed
*/
void rev_string(char *s)
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
}
