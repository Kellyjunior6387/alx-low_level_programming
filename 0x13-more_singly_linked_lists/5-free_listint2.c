#include "lists.h"

/**
 * free_listint2 - Function to free a listint_t list
 * @head: Pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (*head != NULL)
	{	
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
