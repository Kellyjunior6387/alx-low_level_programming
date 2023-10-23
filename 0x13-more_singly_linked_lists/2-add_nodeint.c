#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - Function to add a new node ata the beginning of a list
 * @head: The head of the list
 * @n: integer of the new node
 * Return: adress of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
