#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *temp = haystack;
		char *ptr = needle;

		while (*temp == *ptr && *ptr != '\0')
		{
			temp++;
			ptr++;
		}

		if (*ptr == '\0')
			return (haystack);
	}

	return (0);
}
