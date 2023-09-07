#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int cwords(char *str);

/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer to an array of strings.
 */

char **strtow(char *str)
{
	int i = 0, j = 0;
	int wrds = 0, ltrs = 0;
	int k = 0, n = 0, s;
	char **arr;

	wrds = cwords(str);
	if (str == NULL || *str == '\0' || !wrds)
		return (NULL);

	arr = malloc((wrds + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < wrds; i++)
	{
		ltrs = 0;
		while (str[j])
		{
			if (str[j] != ' ')
			{
				ltrs++;
			}
			if (str[j] == ' ' && ltrs > 0)
			{
				break;
			}
			j++;
		}
		arr[i] = malloc((ltrs * sizeof(char)) + 1);
		if (arr[i] == NULL)
		{
			free(arr);
			for (k = 0; k <= i; k++)
				free(arr[k]);
			return (NULL);
		}

		for (k = n, s = 0; k < j; k++)
		{
			if (str[k] != ' ')
			{
				arr[i][s] = str[k];
				s++;
			}
		}
		arr[i][s] = '\0';
		n = j;
	}
	arr[i] = NULL;
	return (arr);
}

/**
 * cwords - words counter in a string.
 * @str: string.
 *
 * Return: words number.
 */

int cwords(char *str)
{
	int i = 0, words = 0;

	while (str[i])
	{
		if ((str[i] == 32 && i && str[i - 1] != 32) || (!str[i + 1] && str[i] != 32))
		{
			words++;
		}
		i++;
	}
	return (words);
}
