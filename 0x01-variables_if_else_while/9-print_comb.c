#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (0)
 */
int main(void)
{
int i;
for (i = 0; i <= 10; i++)
{
	putchar(i + '0');
	putchar(',');
	putchar(' ');
	i++;
}
	putchar('\n');
	return (0);
}
