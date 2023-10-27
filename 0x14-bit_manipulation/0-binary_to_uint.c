#include "main.h"

/**
 * binary_to_uint- Function to convert binary to unsigned int
 * @b: pointer to the binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		i <<= 1;
		if (b[a] == '1')
			i += 1;
	}
	return (i);
}
