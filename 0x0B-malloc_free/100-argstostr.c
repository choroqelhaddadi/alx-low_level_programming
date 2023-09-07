#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 *
 * @ac: arguments count.
 * @av: arguments vector.
 *
 * Return: pointer to string.
 */
char *argstostr(int ac, char **av)
{
	int i, j = 0;
	int k = 0, sz = 0;
	char *arr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			sz++;
		}
	}

	arr = malloc(sz + ac + 1);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			arr[k] = av[i][j];
			j++, k++;
		}
		arr[k] = '\n';
		k++;
	}
	arr[k] = '\0';
	return (arr);
	}
