#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 9811-print_to_98.c
 *@n: prints from this number
 */
void print_to_98(int n)
{
	int i;
	int j;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else if (n > 98)
	{
		for (j = n; j >= 98; j--)
		{
			printf("%d, ", j);
		}
	}
	else if (n == 98)
	{
		printf("%d, ", n);
	}
}
