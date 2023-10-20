#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_node_end -  Add node to the end of the list
 * @head: pointer to the head of lists
 * @str: String to be appended
 * Return: adress of new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *ptr;

	if (str == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = strlen(str);
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = temp;
	return (temp);
}
