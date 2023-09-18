#include <stdio.h>
/**
 * _atoi - Function to convert string to a integer
 * @s: string to be converted
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int i, length, j, k, l, m;

	i = 0;
	j = 0;
	k = 0;
	length = 0;
	l = 0;
	m = 0;
	while (s[length] != '\0')
		length++;
	while (i < length && l == 0)
	{
		if (s[i] == '-')
			++j;
		if (s[i] >= '0' && s[i] <= '9')
		{
			m = s[i] - '0';
			if (j % 2)
				m = -m;
			k = k * 10 + m;
			l = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			l = 0;
		}
		i++;
	}
	if (l == 0)
		return (0);
	return (k);
}
