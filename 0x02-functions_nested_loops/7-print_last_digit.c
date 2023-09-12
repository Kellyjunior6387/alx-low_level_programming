#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number whose last value is to be printed
 * Return: Value of last digit
 */
int print_last_digit(int n)
{
	int digit;

	if (n < 0)
	{
		n = -n;
		digit = n % 10;
	}
	else if (digit < 0)
	{
		digit = -digit;
	}
	putchar(digit + '0');
	return (digit);
}
