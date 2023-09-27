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
	return (helper(n, 0, n));
}
/**
 * helper - function that uses binary search to find sqrt
 * @n: input
 * @i: start of search
 * @j: end of search
 * Return: sqrt
 */
int helper(int n, int i, int j)
{
	int mid;
	long  int square;

	if (i > j)
	{
		return (-1);
	}
	mid = i + (j - i) / 2;
	square = (long)mid * mid;
	if (n == square)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (helper(n, mid + 1, j));
	}
	else
	{
		return (helper(n, i, mid + 1));
	}
}
