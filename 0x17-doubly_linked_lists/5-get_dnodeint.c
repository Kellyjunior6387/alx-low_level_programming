#include "lists.h"
/**
 * get_dnodeint_at_index - Function to get nth node
 * @head: Pointer of the head node
 * @index: index of the node
 * Return: The nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index){
	dlistint_t *ptr;
	size_t n = 0;

	if (head == NULL)
		return (NULL);
	ptr = head;
	while(ptr)
	{
		if (n == index)
			return (ptr);
		n++;
		ptr = ptr->next;
	}
	return (NULL);
}

