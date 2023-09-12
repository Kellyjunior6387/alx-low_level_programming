#include <stdio.h>
/**
 * main - Prints First 50 Fibonacci numbers starting with 1 and 2
 * Return: Always (0)
 */
int main(void)
{
	int count;
	unsigned long start = 0, end = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = start + end;
		printf("%lu", sum);
		start = end;
		end = sum;
		if (count == 49)
		{
			printf("\n");
		}
		else
		{
			printf(",");
		}
	}
	return (0);
}
