#include "lists.h"
/**
 * delete_nodeint_at_index - Function to delete a node at index
 * @head: Pointer to the head of the list
 * @index: index of the node to be deleted
 * Return: 1 if succesful -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *current;
	unsigned int i;

	temp = *head;
	current = NULL;
	i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
