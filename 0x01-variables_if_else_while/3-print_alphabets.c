#include <stdio.h>
/**
 * main - entry point
 * Return: always (0)
 */
int main(void)
{	char lowerletters = 'a';
	char upperletters = 'A';
while (lowerletters  <= 'a')
{
	putchar(lowerletters);
	lowerletters++;
}
while (upperletters <= 'Z')
{
	putchar(upperletters);
}
	putchar('\n');
	return (0);
}
