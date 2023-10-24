#include "lists.h"

/**
 * pop_listint -  Function that deltes head of a node
 * @head: Pointer to the head of the list
 * Return: data of the delted node
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (0);
	}
	i = *head->n;
	temp = *head->next;
	free(*head);
	*head = temp;

	return (i);
}
