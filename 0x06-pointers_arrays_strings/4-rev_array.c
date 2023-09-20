#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: The array provided
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
