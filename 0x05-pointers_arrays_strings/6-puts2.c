#include "main.h"
/**
 * puts2 - Function to print every other character
 * @str: The string to be printed
 */
void puts2(char *str)
{
	int i = 0;
	int long = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		long++;
	}
	i = long - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			putchar(str[o]);
		}
	}
	putchar('\n');
}
