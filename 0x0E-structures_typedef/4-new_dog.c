#include <stdlib.h>
#include "dog.h"
/**
 * strlength - finds length of a string
 * @s: input
 * Return: length of string
 */
int strlength(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
/**
 * strcopy - copies a string
 * @dest: input
 * @src: input
 * Return: the copied string
 */
char *strcopy(char *dest, char *src)
{
	int length, i;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name : name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a pointer to the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int name_length, owner_length;

	name_length = strlength(name);
	owner_length = strlength(owner);

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = malloc(sizeof(char) * (name_length + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(sizeof(char) * (owner_length + 1));
	if (ptr->owner == NULL)
	{
		free(ptr);
		free(ptr->name);
		return (NULL);
	}
	strcopy(ptr->name, name);
	strcopy(ptr->owner, owner);
	ptr->age = age;

	return (ptr);
}
