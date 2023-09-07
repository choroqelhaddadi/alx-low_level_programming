#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string to copy.
 *
 * Return: pointer to string.
 *
 */

char *_strdup(char *str)
{
	unsigned int i, sz = 0;
	char *arr;

	if (str == NULL)
		return (NULL);

	while (*(str + sz) != '\0')
		sz++;

	arr = malloc(sz + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= sz; i++)
	{
		if (i == sz)
		{
			*(arr + i) = '\0';
			return (arr);
		}
		arr[i] = str[i];
	}
	return (NULL);
}
