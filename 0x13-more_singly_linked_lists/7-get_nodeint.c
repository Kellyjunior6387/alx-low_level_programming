#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node in a list
 * @head: Pointer to the head of the list
 * @index: index of the node
 * Return: the node at the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;
	listint_t *temp;

	temp = head;
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}
	if (temp !=  NULL)
		return (temp);
	else
		return (NULL);
}
