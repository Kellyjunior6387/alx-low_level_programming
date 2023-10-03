#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 * count_word - helper function to count the number of words in a string
 * @string: input
 * Return: number of words in the strring
 */
int count_word(char *string)
{
	int flag, i, words;

	flag = 0;
	words = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			words++;
		}
	}

	return (words);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	char **array, *tmp;
	int i, j = 0, length = 0, words, count = 0, start, end;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	array = (char **) malloc(sizeof(char *) * (words + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (count)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (count + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				arrray[j] = tmp - count;
				j++;
				count = 0;
			}
		}
		else if (count++ == 0)
			start = i;
	}

	array[j] = NULL;

	return (array);
}
