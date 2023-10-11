#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - a functionto print name
 * @name: input
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
