#include "lists.h"
/**
 * sum_dlistint - Returns sum of all data in a list
 * @head: Pointer to the head of the list
 * Return: the sum of all data in the nodes
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	unsigned int sum;

	sum = 0;
	ptr = head;
	if (head == NULL)
		return (0);
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

