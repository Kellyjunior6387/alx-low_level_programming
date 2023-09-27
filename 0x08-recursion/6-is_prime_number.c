#include "main.h"
/**
 * is_prime_number - function to checker if function prime number
 * @n: input
 * Return: 1 if prime number
 */
int is_prime_number(int n)
{
	return (prime_number_helper(n, 2));
}
/**
 * prime_number_helper - a function to check if a digit is a prime number
 * @n: input
 * @divisor: input
 * Return: 1 if prime number
 */
int prime_number_helper(int n, int divisor)
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
