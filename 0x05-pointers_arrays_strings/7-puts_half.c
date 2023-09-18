#include "main.h"
/**
 * puts_half - Function that prints half of a string
 * @str: String to be printed
 */
void puts_half(char *str)
{
	int l, i;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 0)
	{
	for (i = l / 2; i < l; i++)
	{
		putchar(str[i]);
	}
	}
	else
	{

		for (i = (l - 1) / 2; i < l; i++)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
