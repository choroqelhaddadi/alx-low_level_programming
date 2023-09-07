#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 *
 * @s1: 1st string.
 * @s2: 2nd string.
 *
 * Return: pointer to string
 *
 */

char *str_concat(char *s1, char *s2)
{
	int a, b, size_1 = 0, size_2 = 0;
	char *arr;

	if (s1 != NULL)
	{
		for (size_1 = 0; s1[size_1] != '\0'; size_1++)
		;
	}

	if (s2 != NULL)
	{
		for (size_2 = 0; s2[size_2] != '\0'; size_2++)
		;
	}

	arr = malloc(size_1 + size_2 + 1);

	if (arr == NULL)
		return (NULL);

	for (a = 0; a < size_1; a++)
	{
		arr[a] = s1[a];
	}

	for (b = 0; b < size_2; b++)
	{
		arr[a + b] = s2[b];
	}
	arr[size_1 + size_2] = '\0';
	return (arr);
}
