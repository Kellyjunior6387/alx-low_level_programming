#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes a node at a given index
 * @head: Pointer to head of the list
 * @index: index of the node to be deleted
 * Return: 1 if succesful otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *ptr;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	ptr = current->prev;
	ptr->next = current->next;
	if (current->next != NULL)
		current->next->prev = ptr;
	free(current);

	return (1);
}
