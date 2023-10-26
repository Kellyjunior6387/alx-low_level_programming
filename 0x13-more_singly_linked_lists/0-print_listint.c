#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Function to print elements in a list
 * @h: Pointer to the header of the list
 * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
