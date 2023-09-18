#include <stdio.h>
/**
 * print_array - Function that prints n elements of an array of integers
 * @a: The array whose integers are to be printed
 * @n: The number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
