#include "main.h"
/**
* rev_string - A function that prints a string
* in reverse followed by a new line
* @s: The string to be reversed
*/
void rev_string(char *s)
{
	int i;
	char c = s[0];
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		l--;
		c = s[i];
		s[i] = s[l];
		s[l] = c;
	}
}
