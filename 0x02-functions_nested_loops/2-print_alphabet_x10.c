#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 */
void print_alphabet_x10(void)
{
	char ch;
	int count;

	count = 0;

	while (count < 10)
{
	ch = 'a';
	while (ch <= 'z')
	{
	_putchar(ch);
	ch++;
	}
	_putchar('\n');
	count++;
}
}
