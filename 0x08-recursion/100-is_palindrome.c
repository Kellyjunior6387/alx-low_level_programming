#include "main.h"
#include <string.h>
/**
 * is_palindrome - Function to check if a string is a palindrome
 * @s: input
 * Return: 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int slength;

	slength = strlen(s);
	if (slength == 0)
	{
		return (1);
	}
	return (palindrome_checker(s, 0, slength - 1));
}
/**
 * palindrome_checker - Function to help find a palindrome
 * @s: string
 * @start: start of the search
 * @end: end of the search
 * Return: 0 if not and 1 if palindrome
 */
int palindrome_checker(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (palindrome_checker(s, start + 1, end - 1));
}
