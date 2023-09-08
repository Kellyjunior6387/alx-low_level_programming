#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (0)
 */
int main(void)
{
char number;
char letter;
number = '0';
letter = 'a';
while (number <= '9')
{
	putchar(number);
	number++;
}
while (letter <= 'f')
{
	putchar(letter);
	letter++;
}
	putchar('\n');
	return (0);
}
