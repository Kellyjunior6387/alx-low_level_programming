#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - function to check if a number is positive or negative
 * Return: always (0)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
	printf("%d is positive\n", n);
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
	printf("%d is negative\n", n);
}
	return (0);
}