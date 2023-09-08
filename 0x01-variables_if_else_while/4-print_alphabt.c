#include <stdio.h>

/**
 * main - entry point
 * Return: always (0)
 */

int main(void)
{
char ch;
ch = 'a';
while (ch <= 'z')
{
if (ch != 'q' && ch != 'e')
{
	putchar(ch);
}
	ch++;
}
	return (0);
}
