#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - program to sum all the arguments
 * @n: number of arguments passed
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i, x;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
