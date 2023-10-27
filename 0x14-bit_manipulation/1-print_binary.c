#include "main.h"

/**
 * _pow - Calculates the power of a number
 * @base: base number
 * @pow: power
 * Return: The result
 */
unsigned long int _pow(unsigned int base, unsigned int pow)
{
	unsigned long int i = 1;
	unsigned int a;

	for (a = 1; a <= pow; a++)
	{ 
		i *= base;
	}
	return (i);
}
/**
 * print_binary - prints a number in binary
 * @n: Number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int d, c;
	char flag = 0;

	d = _pow(2,sizeof(unsigned long int) * 8 - 1);
	while (d !=  0)
	{
		c = n & d;
		if (c == d)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || d == 1)
		{
			_putchar('0');
		}
		d >>= 1;
	}
}
