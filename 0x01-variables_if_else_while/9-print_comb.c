#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (0)
 */
int main(void)
{
char ch;
ch = '0';
while (ch <= '9')
{
	putchar(ch);
	putchar(',');
	putchar(' ');
	ch++;
}
	putchar('\n');
	return (0);
}
