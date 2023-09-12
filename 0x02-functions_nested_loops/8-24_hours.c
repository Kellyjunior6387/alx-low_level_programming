#include "main.h"

/**
 * jack_bauer - prints every minute of th =e day of jack bauer
 */
void jack_bauer(void)
{
	int i;
	int j;

	i = 0;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(':');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			putchar('\n');
			j++;
		}
		i++;
	}
}
