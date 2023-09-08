#include <stdio.h>
/**
 * main - entry point
 * Return: Always (0)
 */
int main(void)
{
char ch;
ch = 'z';
while (ch >= 'a')
{
	putchar(ch);
	ch--;
}
	return (0);
}
