#include "lists.h"

/**
 * dlistint_len - Function to count elements in a list
 * @h: Head of the list
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	i = 0;
	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
