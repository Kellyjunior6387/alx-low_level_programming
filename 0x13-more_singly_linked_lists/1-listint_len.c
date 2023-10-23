#include "lists.h"
#include <stdio.h>
/**
 * listint_len - Function to return number of elements in a list
 * @h: Pointer to head of the list
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h =  h->next;
	}
	return (i);
}
