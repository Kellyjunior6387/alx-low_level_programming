#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Function to free list
 * @head: Pointer to the head node
 */
void free_list(list_t *head)
{
	list_t *c;

	while (head != NULL)
	{
		c = head;
		head = head->next;
		free(c->str);
		free(c);
	}
}
