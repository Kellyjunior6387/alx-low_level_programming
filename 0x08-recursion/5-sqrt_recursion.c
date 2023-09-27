#include "main.h"
/**
 * _sqrt_recursion - returns the natural square
 * @n :input
 * Return: The natural square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	helper(n, 0, n);
	return (0);
}
