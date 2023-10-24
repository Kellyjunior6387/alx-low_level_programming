#include "lists.h"
/**
 * sum_listint - Function to return the sum of all data in a list
 * @head: Pointer to the head of the list
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;
	if (head == NULL)
		return (NULL);
	while (temp != NULL)
	{
		sum += temp->n;
		temp =  temp->next;
	}
	return (sum);
}
