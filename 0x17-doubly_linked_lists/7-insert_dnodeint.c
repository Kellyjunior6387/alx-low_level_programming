#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a position
 * @h: Pointer to the head of the list
 * @idx: index of the list to append node
 * @n: Value of the node
 * Return: adress of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *ptr;
	unsigned int i;

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		ptr = *h;
		i = 1;
		if (ptr != NULL)
			while (ptr->prev != NULL)
				ptr = ptr->prev;
		while (ptr != NULL)
		{
			if (i == idx)
			{
				if (ptr->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new)
					{
						new->n = n;
						new->next = ptr->next;
						new->prev = ptr;
						ptr->next = new;
					}
				}
				break;
			}
			ptr = ptr->next;
			i++;
			}
	}
	return (new);
}

