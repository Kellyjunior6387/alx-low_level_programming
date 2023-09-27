#include "main.h"
/**
 * factorial - Function to print factorial of a nuber
 * @n: input
 * Return: The factorial of n
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * (factorial(n - 1)));
	}
	else
	{
		if (n < 0)
		{
			return (-1);
		}
		else
		{
			return (1);
		}
	}
}
