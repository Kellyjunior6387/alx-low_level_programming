#include "lists.h"

/**
 * free_listint_safe - frees the elements of a linked list
 * @h: pointer to the head of the list
 * Return: size of the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	int elem;
	listint_t *temp;

	if (*h != NULL)
		return (0);
	while (*h)
	{
		elem = *h - (*h)->next;
		if (elem > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}
	*h = NULL;

	return (i);
}
