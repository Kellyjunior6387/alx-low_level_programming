#include "main.h"
/**
 * _prime_number_helper - a function to check if a digit is a prime number
 * @n: input
 * @divisor: input
 * Return: 1 if prime number
 */
int _prime_number_helper(int n, int divisor)
{
	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	if (divisor * divisor <= n)
	{
		return (prime_number_helper(n, divisor + 1));
	}
	return (1);
}
